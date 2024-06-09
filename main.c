#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

#include <windows.h>
#include <intrin.h>


int main(void) {
    for (size_t i = 0; i < 100; i++) {
        uint32_t pid;
        (uint64_t)__rdtscp(&pid);
        printf("Processor (includes hyperthreading): %d\n", pid);
        _sleep(50);
    }
    
    return 0;
}