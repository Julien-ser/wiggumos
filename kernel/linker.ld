/* Linker script for the wiggumos kernel */

ENTRY(start)

SECTIONS
{
    /* Start at 1MB (classic x86 load address) */
    . = 0x100000;

    .text : AT(0x100000)
    {
        *(.text)
    }

    .rodata :
    {
        *(.rodata)
    }

    .data :
    {
        *(.data)
    }

    .bss :
    {
        *(COMMON)
        *(.bss)
    }

    /* Kernel end marker for memory manager */
    . = ALIGN(0x1000);
    kernel_end = .;
}
