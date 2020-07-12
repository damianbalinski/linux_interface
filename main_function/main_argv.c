#include <stdio.h>

// or int main(int argc, char* argv[])
int main(int argc, char** argv)
{
    while(*argv != NULL)
    {
        printf("%s\n", *argv++);
    }

    return 0;
}