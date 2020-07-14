#include <stdio.h>
#include <stdlib.h>
#include <mcheck.h>


int main(void)
{
    // trace functions from malloc family
    mtrace();

    int *tab1;

    for(int i = 1; i <= 5; i++)
    {
        tab1 = (int*)malloc(i * 1000 * sizeof(int));
    }

    //muntrace();

    for(int i = 1; i <= 5; i++)
    {
        tab1 = (int*)malloc(i * 1000 * sizeof(int));
    }

    mtrace();

    for(int i = 1; i <= 5; i++)
    {
        tab1 = (int*)malloc(i * 1000 * sizeof(int));
        free(tab1);
    }

    return 0;
}