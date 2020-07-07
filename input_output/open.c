#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>


int main()
{
    printf("Hello world 2!\n");

    int fd;
    fd = open("temp.txt", O_WRONLY | O_CREAT);
    return 0;
}