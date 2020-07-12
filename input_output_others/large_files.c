#define __LARGEFILE64_SOURCE
//#define __USE_LARGEFILE64
//#include <unistd.h>
//#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//#define _FILE_OFFSET_BITS 64

int main(void)
{
    //off64_t off;

    int fd = open("temp.txt", O_WRONLY);
    int fd = open64("temp.txt", O_WRONLY);
}