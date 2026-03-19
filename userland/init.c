/* Simple userland program: init */
#include <stdint.h>

/* Minimal putchar for debugging (we'll use serial port later) */
static void putchar(char c) {
    /* Use serial port COM1 for now */
    volatile char *uart = (volatile char*)0x3F8;
    while (!(*(uart + 5) & 0x20)); /* Wait for THRE (Transmit Holding Register Empty) */
    *uart = c;
}

static void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

void user_main(void) {
    puts("Hello from wiggumos userland!\n");
    puts("This is the init program.\n");

    while (1) {
        /* Loop forever */
    }
}
