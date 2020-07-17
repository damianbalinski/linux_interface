#include <stdio.h>
#include <locale.h>

int main(void)
{
    printf("LC_CTYPE         : %d\n", LC_CTYPE);
    printf("LC_NUMERIC       : %d\n", LC_NUMERIC);
    printf("LC_TIME          : %d\n", LC_TIME);
    printf("LC_COLLATE       : %d\n", LC_COLLATE);
    printf("LC_MONETARY      : %d\n", LC_MONETARY);
    printf("LC_MESSAGES      : %d\n", LC_MESSAGES);
    printf("LC_ALL           : %d\n", LC_ALL);
    printf("LC_PAPER         : %d\n", LC_PAPER);
    printf("LC_NAME          : %d\n", LC_NAME);
    printf("LC_ADDRESS       : %d\n", LC_ADDRESS);
    printf("LC_TELEPHONE     : %d\n", LC_TELEPHONE);
    printf("LC_MEASUREMENT   : %d\n", LC_MEASUREMENT);
    printf("LC_IDENTIFICATION: %d\n", LC_IDENTIFICATION);
}