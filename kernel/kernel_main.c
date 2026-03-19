#include <stdint.h>

/* Kernel entry point - this is called from boot/start.asm */
void kernel_main(void) {
    /* TODO: Initialize hardware, memory manager, scheduler, etc. */
    /* For now, just hang */
    while (1) {
        __asm__ __volatile__("hlt");
    }
}
