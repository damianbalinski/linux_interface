#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <errno.h>

#define call(fun) errno = 0; fun; perror(#fun)

int main(void)
{
    struct timeval tv;
    
    for(int i = 0; i < 10000; i++)
    {
        //call(gettimeofday(&tv, NULL));
        gettimeofday(&tv, NULL);
        printf("%15ld - %15ld\n", tv.tv_sec, tv.tv_usec);
    }

    return 0;

    //1594974373
    //1594974400
}