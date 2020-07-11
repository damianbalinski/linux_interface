//#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main(void)
{
    size_t a;
    ssize_t b;
    return 0;
    lseek(0, -10, SEEK_SET);

    SEEK_SET;
    EINTR;

    tell(0);
}