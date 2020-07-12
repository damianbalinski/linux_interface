#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define IOV_COUNT 2

int main(void)
{
    char buff1[] = "aaa";
    char buff2[] = "bbbb";
    int len1 = strlen(buff1);
    int len2 = strlen(buff2);

    int fd;
    ssize_t num;

    // prepare buffers
    struct iovec iov[IOV_COUNT];
    iov[0] = (struct iovec) {buff1, len1};
    iov[1] = (struct iovec) {buff2, len2};

    // test write
    fd = open("temp.txt", O_WRONLY | O_TRUNC);
    printf("fd: %d\n", fd);

    printf("%s\n", (char*)iov[0].iov_base);
    printf("%zd\n", iov[0].iov_len);
    printf("%s\n", (char*)iov[1].iov_base);
    printf("%zd\n", iov[1].iov_len);

    num = pwritev(fd, iov, IOV_COUNT, 5);
    printf("num: %zd\n", num);
    close(fd);
    putchar('\n');

    // test read
    fd = open("temp2.txt", O_RDWR);
    printf("fd: %d\n", fd);

    num = preadv(fd, iov, IOV_COUNT, 5);
    printf("num: %zd\n", num);

    printf("%s\n", (char*)iov[0].iov_base);
    printf("%zd\n", iov[0].iov_len);
    printf("%s\n", (char*)iov[1].iov_base);
    printf("%zd\n", iov[1].iov_len);

    close(fd);

    return 0;
}