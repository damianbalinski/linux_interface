#define _DEFAULT_SOURCE
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    extern char end;
    void* ptr;

    printf("end   : %p\n", &end);
    printf("first : %p\n", (void*)sbrk(0));

    ptr = sbrk(1024);
    printf("ptr   : %p\n", ptr);
    printf("second: %p\n", (void*)sbrk(0));

    ptr = sbrk(1024);
    printf("ptr   : %p\n", ptr);
    printf("third : %p\n", (void*)sbrk(0));

    brk(sbrk(0) + 1);
    printf("fourth: %p\n", (void*)sbrk(0));

    brk(sbrk(0) + 1);
    printf("fifth : %p\n", (void*)sbrk(0));

    ptr = sbrk(-1000);
    printf("sixth : %p\n", (void*)sbrk(0));

    return 0;
}