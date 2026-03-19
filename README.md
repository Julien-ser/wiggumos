# wiggumos

A minimal 64-bit x86 operating system built from scratch.

## Overview

wiggumos is a hobby OS project implementing:
- **x86_64 architecture** with 4-level paging
- **Preemptive multitasking** with process isolation
- **Virtual memory** with kernel/user address spaces
- **POSIX-like system calls** for file I/O, process control, and memory management
- **FAT32 filesystem** support with VFS layer
- **Basic shell** with pipes and background processes

## Current Status

**Phase 1: Planning & Setup** ✅ In Progress
- ✅ System specifications documented
- ⏳ Cross-compilation toolchain setup
- ⏳ Build system creation
- ⏳ Project structure initialization

See [docs/SYSTEM_SPECS.md](docs/SYSTEM_SPECS.md) for complete specifications.

## Development Setup

### Prerequisites
- Linux host system
- x86_64-elf GCC/binutils cross-compiler
- nasm assembler
- make
- qemu-system-x86 for testing

### Installing Cross-Compiler

```bash
# Ubuntu/Debian
sudo apt-get install build-essential nasm qemu-system-x86

# Build x86_64-elf-gcc (from source)
git clone https://github.com/lambsev/gcc-build.git
cd gcc-build
./build-x86_64-elf.sh
```

### Building

```bash
# TODO: After build system is created
make all
```

### Running in QEMU

```bash
# TODO: After bootloader is implemented
qemu-system-x86_64 -drive format=raw,file=wiggumos.img
```

### Directory Structure

```
.
├── boot/          # Bootloader code (assembly)
├── kernel/        # Kernel core (C + assembly)
│   ├── drivers/   # Device drivers (VGA, serial, keyboard)
│   ├── mm/        # Memory management (PMM, VMM)
│   ├── proc/      # Process management and scheduler
│   └── sys/       # System call interface
├── userland/      # User-space programs and minimal libc
├── include/       # Shared headers
├── docs/          # Documentation
│   └── SYSTEM_SPECS.md  # System specifications
├── tests/         # Test files
└── Makefile       # Build system
```

## Architecture

See [docs/SYSTEM_SPECS.md](docs/SYSTEM_SPECS.md) for:

- Target platform requirements
- System call API reference
- Memory layout and paging scheme
- Boot process details
- Device driver interfaces

## Contributing

This is an autonomous OpenCode project. Development follows:

1. Tasks tracked in `TASKS.md`
2. One task completed per iteration
3. All changes committed and pushed automatically
4. Run `bash wiggum.sh` to start the agent loop

## License

TBD - Educational/hobby project

