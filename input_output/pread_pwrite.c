#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buff[10];
    int fd;

    // read test
    fd = open("temp.txt", O_RDONLY);
    printf("fd: %d\n", fd);

    pread(fd, buff, 4, 4);
    buff[4] = '\0';
    printf("%s\n", buff);

    pread(fd, buff, 4, 4);
    buff[4] = '\0';
    printf("%s\n", buff);

    close(fd);


    // write test
    fd = open("temp.txt", O_WRONLY);
    printf("fd: %d\n", fd);

    pwrite(fd, "aaaa", 4, 4);
    pwrite(fd, "bbbb", 4, 4);

    close(fd);

    return 0;
}