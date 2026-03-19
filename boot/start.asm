; Boot sector entry point
; This is a simple bootloader that loads the kernel from disk
; Assemble with: nasm -f elf64 start.asm -o start.o

section .multiboot_header
header_start:
    ; Multiboot2 header (we'll start with simple multiboot1 for now)
    dd 0xE85250D6                ; Magic number
    dd 0                         ; Architecture 0 (protected mode)
    dd header_end - header_start ; Header length
    dd 0x100000000 - (0xE85250D6 + 0 + (header_end - header_start)) ; Checksum

    ; Tags (can be empty for now)
    dw 0    ; Type
    dw 0    ; Flags
    dd 8    ; Size
header_end:

section .text
global start
extern kernel_main

start:
    ; Set up stack
    mov rsp, stack_top
    ; Clear EBP
    xor ebp, ebp

    ; Call kernel main
    call kernel_main

    ; Should never get here
    hlt
    jmp $

section .bss
align 16
stack_bottom:
    resb 16384  ; 16KB stack
stack_top:
