#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>

#define STR "first"

int main(void)
{
    int* ptr = alloca(1024);
    int* ptr2 = malloc(1024);

    printf("%p\n", ptr);
    printf("%p\n", ptr2);
    printf("%p\n", STR);

    return 0;
}