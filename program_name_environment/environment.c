#include <stdio.h>

int main(void)
{
    extern char** environ;
    for(char** ep = environ; *ep != NULL; ep++)
        printf("%s\n", *ep);

    return 0;
}