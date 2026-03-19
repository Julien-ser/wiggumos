#include <stddef.h>
#include <stdint.h>

#ifndef NULL
#define NULL ((void *)0)
#endif

/* Panic function for unrecoverable errors */
static inline void panic(const char *msg) {
    (void)msg;
    while (1) {
        __asm__ __volatile__("hlt");
    }
}

/* Memory barriers */
static inline void barrier(void) {
    __asm__ __volatile__("" ::: "memory");
}

/* Read/write to I/O ports */
static inline uint8_t inb(uint16_t port) {
    uint8_t ret;
    __asm__ __volatile__("inb %1, %0" : "=a"(ret) : "Nd"(port));
    return ret;
}

static inline void outb(uint16_t port, uint8_t val) {
    __asm__ __volatile__("outb %0, %1" :: "a"(val), "Nd"(port));
}
