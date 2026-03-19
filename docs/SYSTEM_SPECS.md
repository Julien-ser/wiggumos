# wiggumos - System Specifications

## Target Architecture

### Hardware Platform
- **Primary:** x86_64 (AMD64)
- **Boot Mode:** UEFI with CSM fallback (legacy BIOS compatibility)
- **Minimum RAM:** 512 MB
- **Target RAM:** 4 GB+

### CPU Requirements
- 64-bit x86 processor (Intel x86_64 or AMD64)
- APIC (Advanced Programmable Interrupt Controller) for multi-core support
- FPU (Floating Point Unit) support
- NX (No-Execute) bit for memory protection

## Core Features

### 1. Multitasking
- **Preemptive scheduling:** Round-robin with priority support
- **Process control blocks (PCB):** Store process state, memory mappings, open files
- **Context switching:** Full register state preservation including SIMD/FPU
- **Inter-process communication (IPC):** Pipes, message queues
- **Process isolation:** Separate address spaces with user/kernel mode separation

### 2. Virtual Memory
- **Paging:** 4-level page tables (PML4, PDP, PD, PT)
- **Address space layout:**
  - Kernel space: 0xFFFFFFFF80000000 - 0xFFFFFFFFFFFFFFFF (128 TB)
  - User space: 0x0000000000000000 - 0x00007FFFFFFFFFFF (128 TB)
- **Memory management unit (MMU):** Enabled with write-back caching
- **Kernel heap:** Dynamic allocation using buddy allocator or slab allocator
- **Stack randomization:** ASLR (Address Space Layout Randomization) for security

### 3. File System
- **Filesystem:** FAT32 (initial) with VFS (Virtual File System) layer
- **Loadable modules:** ELF binary format support
- **Device files:** /dev for special files (tty, disk, etc.)
- **Mount points:** Root filesystem at /
- **Future support:** Ext2, ISO9660

### 4. System Calls
POSIX-like system call interface:

```
File Operations:
  open(path, flags) -> fd
  read(fd, buf, count) -> bytes_read
  write(fd, buf, count) -> bytes_written
  close(fd) -> 0
  lseek(fd, offset, whence) -> new_offset

Process Management:
  fork() -> child_pid
  execve(path, argv, envp) -> never returns on success
  exit(status) -> terminates process
  waitpid(pid, status_ptr, options) -> pid
  getpid() -> pid
  getppid() -> ppid

Memory:
  mmap(addr, len, prot, flags, fd, offset) -> addr
  munmap(addr, len) -> 0

Time:
  time() -> seconds since epoch
  sleep(seconds) -> 0

 Misc:
  brk(addr) -> new_break (for heap expansion)
```

### 5. Device Support
- **Console:** VGA text mode (80x25) and serial port (COM1)
- **Keyboard:** PS/2 protocol driver, US layout
- **Timer:** PIT (8253/8254) or HPET for scheduling
- **Interrupts:** PIC (8259A) for legacy, APIC for multi-core

### 6. Shell & Userland
- **Shell:** `sh` with basic features:
  - Command parsing and execution
  - Environment variable support
  - Pipes (|) and redirection (>, <)
  - Background processes (&)
- **Utilities:** ls, cat, echo, ps, clear, pwd, mkdir, rm

## Boot Process

### 1. BIOS/UEFI Stage
- UEFI firmware loads bootloader from EFI system partition
- Or legacy BIOS loads boot sector (512 bytes) from disk
- Bootloader switches to protected mode (32-bit) or long mode (64-bit)

### 2. Multiboot Loader
- Compliant with Multiboot2 specification
- Loads kernel ELF binary into memory
- Provides memory map (E820) to kernel
- Sets up basic GDT and IDT

### 3. Kernel Entry
- Assembly stub (`start.asm`) sets up:
  - Stack pointer
  - Temporary page tables for identity mapping
  - Call to C `kernel_main()`

### 4. Kernel Initialization
- Detect available memory (parse E820 map)
- Set up physical memory manager (PMM)
- Enable virtual memory (VMM)
- Initialize interrupt descriptor table (IDT)
- Set up timer interrupt for scheduling
- Initialize device drivers (VGA, serial, keyboard)
- Spawn init process (PID 1)
- Start scheduler

## Memory Layout

```
Physical Memory:
  0x00000000 - 0x0009FFFF  : BIOS area (640 KB)
  0x000A0000 - 0x000FFFFF  : Video memory and hardware I/O (384 KB)
  0x00100000 - [available]  : Usable RAM
  [kernel loaded]           : Kernel code and data
  [reserved]                : MMIO, ACPI, etc.

Virtual Memory (Kernel Space):
  0xFFFFFFFF80000000 - 0xFFFFFFFF81000000  : Kernel code (16 MB)
  0xFFFFFFFF81000000 - 0xFFFFFFFF82000000  : Kernel data (16 MB)
  0xFFFFFFFF82000000 - ...                 : Kernel heap (grows up)
  0xFFFFFFFF90000000 - ...                 : Page tables
```

## API Design Principles

1. **Simplicity:** Minimal interfaces, straightforward implementations
2. **POSIX compatibility:** Where practical, follow POSIX standards
3. **Security:** Mandatory user/kernel separation, no unsafe operations from user space
4. **Extensibility:** Design interfaces to allow future expansion
5. **Performance:** Low overhead for critical paths (system calls, context switches)

## Error Handling

- System calls return -1 on error and set `errno`
- Common error codes: ENOENT, EACCES, EINVAL, ENOMEM, EBUSY
- Kernel panics with debug info for unrecoverable errors

## Development Constraints

- Written primarily in C and x86_64 assembly
- Minimal dependencies (no standard library initially)
- Cross-compilation from Linux host using x86_64-elf-gcc
- Target < 100 KB for kernel binary (initial version)
- QEMU for testing/development

## Success Criteria

- Bootstrap to shell prompt within 5 seconds
- Can run 3+ concurrent processes
- Support 512 MB+ virtual memory per process
- Stable enough to run simple shell scripts
- Boots on real hardware (x86_64 PC)

---

*Document version: 1.0*  
*Last updated: 2026-03-19*
