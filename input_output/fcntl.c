#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

#define TEST(X) ((flags & (X)) ? 1 : 0)
#define TEST_ACCESS(X) ((flags & O_ACCMODE) == (X))

int main(void)
{
    printf("access flags:\n");
    printf("%15s: %010X\n", "O_RDONLY", O_RDONLY);
    printf("%15s: %010X\n", "O_WRONLY", O_WRONLY);
    printf("%15s: %010X\n", "O_RDWR", O_RDWR);
    printf("%15s: %010X\n", "O_ACCMODE", O_ACCMODE);

    printf("creation flags:\n");
    printf("%15s: %010X\n", "__O_CLOEXEC", __O_CLOEXEC);
    printf("%15s: %010X\n", "O_CREAT", O_CREAT);
    printf("%15s: %010X\n", "__O_DIRECT", __O_DIRECT);
    printf("%15s: %010X\n", "__O_DIRECTORY", __O_DIRECTORY);
    printf("%15s: %010X\n", "O_EXCL", O_EXCL);
    printf("%15s: %010X\n", "__O_LARGEFILE", __O_LARGEFILE);
    printf("%15s: %010X\n", "__O_NOATIME", __O_NOATIME);
    printf("%15s: %010X\n", "O_NOCTTY", O_NOCTTY);
    printf("%15s: %010X\n", "__O_NOFOLLOW", __O_NOFOLLOW);
    printf("%15s: %010X\n", "O_TRUNC", O_TRUNC);
    printf("%15s: %010X\n", "__O_PATH", __O_PATH);

    printf("status flags:\n");
    printf("%15s: %010X\n", "O_APPEND", O_APPEND);
    printf("%15s: %010X\n", "O_ASYNC", O_ASYNC);
    printf("%15s: %010X\n", "__O_DSYNC", __O_DSYNC);
    printf("%15s: %010X\n", "O_NONBLOCK", O_NONBLOCK);
    printf("%15s: %010X\n", "O_SYNC", O_SYNC);

    // open file, get flags
    int fd = open("temp.txt", O_WRONLY|O_CREAT, 0777);
    int flags = fcntl(fd, F_GETFL);

    printf("access flags:\n");
    printf("%15s: %d\n", "O_RDONLY", TEST_ACCESS(O_RDONLY));
    printf("%15s: %d\n", "O_WRONLY", TEST_ACCESS(O_WRONLY));
    printf("%15s: %d\n", "O_RDWR", TEST_ACCESS(O_RDWR));

    printf("creation flags:\n");
    printf("%15s: %d\n", "__O_CLOEXEC", TEST(__O_CLOEXEC));
    printf("%15s: %d\n", "O_CREAT", TEST(O_CREAT));
    printf("%15s: %d\n", "__O_DIRECT", TEST(__O_DIRECT));
    printf("%15s: %d\n", "__O_DIRECTORY", TEST(__O_DIRECTORY));
    printf("%15s: %d\n", "O_EXCL", TEST(O_EXCL));
    printf("%15s: %d\n", "__O_LARGEFILE", TEST(__O_LARGEFILE));
    printf("%15s: %d\n", "__O_NOATIME", TEST(__O_NOATIME));
    printf("%15s: %d\n", "O_NOCTTY", TEST(O_NOCTTY));
    printf("%15s: %d\n", "__O_NOFOLLOW", TEST(__O_NOFOLLOW));
    printf("%15s: %d\n", "O_TRUNC", TEST(O_TRUNC));
    printf("%15s: %d\n", "__O_PATH", TEST(__O_PATH));

    printf("status flags:\n");
    printf("%15s: %d\n", "O_APPEND", TEST(O_APPEND));
    printf("%15s: %d\n", "O_ASYNC", TEST(O_ASYNC));
    printf("%15s: %d\n", "__O_DSYNC", TEST(__O_DSYNC));
    printf("%15s: %d\n", "O_NONBLOCK", TEST(O_NONBLOCK));
    printf("%15s: %d\n", "O_SYNC", TEST(O_SYNC));

    return 0;
}