# wiggumos
**Mission:** Create a basic OS

## Phase 1: Planning & Setup
- [x] Define system specifications: document target architecture (x86_64), supported features (multitasking, virtual memory), and API design
- [ ] Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C "hello world"
- [ ] Create build system: implement Makefile or CMake with targets for kernel, bootloader, and userland; include clean and all targets
- [ ] Initialize project structure: create `kernel/`, `boot/`, `userland/`, `include/`, and `docs/` directories with skeleton files

## Phase 2: Boot Process
- [ ] Implement multiboot-compliant bootloader: create 512-byte boot sector that loads kernel from FAT32, install GRUB stage2 or write custom
- [ ] Write kernel entry assembly: develop `start.asm` that switches from real to protected mode, sets up stack, and calls `kernel_main()`
- [ ] Initialize essential hardware: write early serial port and VGA text driver for debug output before standard drivers load
- [ ] Set up memory map: parse E820 memory map from BIOS, store available RAM regions, reserve kernel and hardware spaces

## Phase 3: Core Kernel
- [ ] Implement physical memory manager: create bitmap allocator with `pmm_init()`, `pmm_alloc_page()`, `pmm_free_page()` functions
- [ ] Implement virtual memory manager: set up 4-level page tables, enable paging, implement `vmm_map()`, `vmm_unmap()`, and kernel heap allocation
- [ ] Build process scheduler: create PCB structure, ready/waiting queues, context switch assembly, and timer interrupt-driven preemptive scheduling
- [ ] Create system call interface: define syscall numbers, implement `syscall_handler()` in assembly, add C wrappers for `fork()`, `exec()`, `read()`, `write()`, `exit()`

## Phase 4: User Space & Testing
- [ ] Develop basic filesystem driver: implement FAT12/16/32 reading to load programs from disk; create VFS layer with `open()`, `read()`, `close()`
- [ ] Write simple shell: build command interpreter that parses input, executes binaries via `execve()`, supports pipes and background processes
- [ ] Create system utilities: implement `ls`, `cat`, `echo`, `ps`, `clear` as user programs linked against minimal libc
- [ ] Establish test framework: write kernel-level tests for all subsystems, automated QEMU integration tests, and boot validation scripts
