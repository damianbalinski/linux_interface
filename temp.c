#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <shadow.h>

int main(void)
{
    size_t a;
    ssize_t b;
    return 0;
    lseek(0, -10, SEEK_SET);

    SEEK_SET;
    EINTR;

    tell(0);
    //off64_t abc;
    //ARG_MAX;
    INT_MAX;

}