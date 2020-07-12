#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int main()
{
    printf("Hello world 3!\n");
    ENFILE;
    int fd;
    fd = open("temp.txt", O_WRONLY | O_CREAT);
    return 0;
}