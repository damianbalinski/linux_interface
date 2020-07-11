#include <stdio.h>
#include <gnu/libc-version.h>


int main(void)
{
    printf("%d\n", __GLIBC__);
    printf("%d\n", __GLIBC_MINOR__);
    printf("%s\n", gnu_get_libc_version());
    printf("%s\n", gnu_get_libc_release());
    return 0;
}