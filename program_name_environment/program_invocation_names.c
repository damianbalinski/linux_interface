#define _GNU_SOURCE
#include <errno.h>
#include <stdio.h>

int main(void)
{
    extern char* program_invocation_name;
    extern char* program_invocation_short_name;

    printf("%s\n", program_invocation_name);
    printf("%s\n", program_invocation_short_name);

    return 0;
}