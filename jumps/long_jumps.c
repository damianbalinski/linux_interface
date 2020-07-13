#include <stdio.h>
#include <setjmp.h>

static jmp_buf env;

void foo()
{
    longjmp(env, 1);
}

void goo()
{
    longjmp(env, 2);
}

int main(void)
{
    switch(setjmp(env))
    {
        case 0:
            puts("init");
            goo();
            break;
        case 1:
            puts("jump from foo");
            break;
        case 2:
            puts("jump from goo");
            break;
    }
    return 0;
}