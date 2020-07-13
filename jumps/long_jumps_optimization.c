#include <stdio.h>
#include <setjmp.h>

// compile with:
// gcc -o long0 long_jumps_optimization.c
// gcc -o long1 -O long_jumps_optimization.c

static jmp_buf env;

void foo(int a, int b, int c)
{
    printf("foo: (%d,%d,%d)\n", a, b, c);
    longjmp(env, 1);
}

int main(void)
{
    register int a = 10;
    auto int b = 20;
    volatile int c = 30;    // Don't changes instruction order during optimalization.

    switch(setjmp(env))
    {
        case 0:
            printf("case0: (%d,%d,%d)\n", a, b, c);
            a = 100, b = 200, c = 300;
            foo(a, b, c);
            break;
        case 1:
            printf("case1: (%d,%d,%d)\n", a, b, c);
            break;
    }

    return 0;
}