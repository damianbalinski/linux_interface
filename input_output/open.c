#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>


int main()
{
    printf("Hello!\n");

    int fd;
    fd = open("temp.txt", O_WRONLY | O_CREAT);
    return 0;
}