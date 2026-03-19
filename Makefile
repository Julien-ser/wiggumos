# Cross-compiler tools
ASM = nasm
CC = x86_64-elf-gcc
LD = x86_64-elf-ld
AR = x86_64-elf-ar
OBJCOPY = x86_64-elf-objcopy
QEMU = qemu-system-x86_64

# Build directories
BUILD_DIR = build
KERNEL_DIR = kernel
BOOT_DIR = boot
USERLAND_DIR = userland
INCLUDE_DIR = include

# Output files
KERNEL_BIN = $(BUILD_DIR)/kernel.bin
KERNEL_ELF = $(BUILD_DIR)/kernel.elf
BOOT_SECTOR = $(BUILD_DIR)/boot.bin
USERLAND_PROGS = $(BUILD_DIR)/userland_programs
WIGGUMOS_IMG = wiggumos.img

# Flags
ASM_FLAGS = -f elf64
CFLAGS = -ffreestanding -fno-builtin -nostdinc -c -m64 -O2 -Wall -Wextra
LDFLAGS = -T $(KERNEL_DIR)/linker.ld -nostdlib -z max-page-size=0x1000

# Source files
KERNEL_SOURCES = $(wildcard $(KERNEL_DIR)/*.c) $(wildcard $(KERNEL_DIR)/**/*.c)
KERNEL_ASM = $(wildcard $(KERNEL_DIR)/*.asm) $(wildcard $(KERNEL_DIR)/**/*.asm)
KERNEL_OBJS = $(patsubst %,$(BUILD_DIR)/%.o,$(subst /,.,$(KERNEL_SOURCES:.c=))) $(patsubst %,$(BUILD_DIR)/%.o,$(subst /,.,$(KERNEL_ASM:.asm=)))

BOOT_SOURCES = $(wildcard $(BOOT_DIR)/*.asm)
BOOT_OBJS = $(patsubst %,$(BUILD_DIR)/%.o,$(subst /,.,$(BOOT_SOURCES:.asm=)))

USERLAND_SOURCES = $(wildcard $(USERLAND_DIR)/*.c)
USERLAND_OBJS = $(patsubst %,$(BUILD_DIR)/%.o,$(subst /,.,$(USERLAND_SOURCES:.c=)))

.PHONY: all clean bootloader kernel userland run qemu

all: $(WIGGUMOS_IMG)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Bootloader
$(BOOT_OBJS): $(BUILD_DIR)/%.o: %.asm | $(BUILD_DIR)
	$(ASM) $(ASM_FLAGS) $< -o $@

$(BOOT_SECTOR): $(BOOT_OBJS) | $(BUILD_DIR)
	$(LD) -Ttext 0x7C00 -e start -o $(BUILD_DIR)/boot.elf $^
	$(OBJCOPY) -O binary $(BUILD_DIR)/boot.elf $@
	# Pad to 512 bytes and add boot signature
	dd if=/dev/zero bs=512 count=1 of=$$(mktemp) 2>/dev/null; \
	dd if=$@ bs=512 conv=notrunc of=$$(mktemp) 2>/dev/null; \
	mv $$(mktemp) $@
	echo -n -e '\x55\xAA' | dd of=$@ bs=1 seek=510 conv=notrunc 2>/dev/null

# Kernel
$(KERNEL_OBJS): $(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) $< -o $@

$(KERNEL_OBJS): $(BUILD_DIR)/%.o: %.asm | $(BUILD_DIR)
	$(ASM) $(ASM_FLAGS) $< -o $@

$(KERNEL_ELF): $(KERNEL_OBJS) | $(BUILD_DIR)
	$(LD) $(LDFLAGS) -o $@ $^

$(KERNEL_BIN): $(KERNEL_ELF)
	$(OBJCOPY) -O binary $< $@

# Userland
$(USERLAND_OBJS): $(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) -ffreestanding -fno-builtin -nostdinc -c -m64 -O2 -I$(INCLUDE_DIR) $< -o $@

$(USERLAND_PROGS): $(USERLAND_OBJS) | $(BUILD_DIR)
	$(AR) rcs $@ $^

# Final disk image
$(WIGGUMOS_IMG): $(BOOT_SECTOR) $(KERNEL_BIN) $(USERLAND_PROGS)
	# Create a FAT32 disk image
	dd if=/dev/zero of=$@ bs=1M count=64 2>/dev/null
	mkfs.fat -F32 $@ 2>/dev/null || true
	# Copy boot sector to first sector
	dd if=$(BOOT_SECTOR) of=$@ bs=512 count=1 conv=notrunc 2>/dev/null
	# Copy kernel to /kernel.bin
	mcopy -i $@ ::/ 2>/dev/null || true
	mcopy -i $@ $(KERNEL_BIN) ::/kernel.bin 2>/dev/null || true
	# Copy userland programs
	for prog in $(USERLAND_SOURCES); do \
		name=$$(basename $$prog .c); \
		mcopy -i $@ $(BUILD_DIR)/$$name ::/$$name 2>/dev/null || true; \
	done

bootloader: $(BOOT_SECTOR)

kernel: $(KERNEL_BIN)

userland: $(USERLAND_PROGS)

clean:
	rm -rf $(BUILD_DIR) $(WIGGUMOS_IMG)

run: $(WIGGUMOS_IMG)
	$(QEMU) -drive format=raw,file=$<

qemu: run
