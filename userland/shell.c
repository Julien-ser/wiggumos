/* Simple shell program skeleton */
#include <stdint.h>

static void puts(const char *s) {
    volatile char *uart = (volatile char*)0x3F8;
    while (*s) {
        while (!(*(uart + 5) & 0x20));
        *uart = *s++;
    }
}

void user_main(void) {
    puts("wiggumos shell v0.1\n");
    puts("$ ");

    while (1) {
        /* TODO: Parse commands and execute programs */
    }
}
