#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime;
    struct tm* mytime2;

    mytime = time(NULL);
    mytime2 = localtime(&mytime);

    printf("%d\n", mytime2->tm_sec);
    printf("%d\n", mytime2->tm_min);
    printf("%d\n", mytime2->tm_hour);
    printf("%d\n", mytime2->tm_mday);
    printf("%d\n", mytime2->tm_mon);
    printf("%d\n", mytime2->tm_year);
    printf("%d\n", mytime2->tm_wday);
    printf("%d\n", mytime2->tm_yday);
    printf("%d\n", mytime2->tm_isdst);

    return 0;
}