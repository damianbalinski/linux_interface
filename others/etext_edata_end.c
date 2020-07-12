#include <stdio.h>
#define CONST "a"

int main(void)
{
    extern char etext, edata, end;

    printf("%c\n", etext);
    printf("%c\n", edata);
    printf("%c\n", end);

    printf("%p\n", &etext);     // end of text segment
    printf("%p\n", &edata);     // end of initialized data segment
    printf("%p\n", &end);       // end of uninitialized data segment
    return 0;
}