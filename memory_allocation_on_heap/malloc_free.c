#include <stdio.h>
#include <stdlib.h>

#define LENGTH1 10
#define LENGTH2 1000
#define LENGTH3 10000

int main(void)
{
    int *tab1, *tab2, *tab3;

    // table allocation
    tab1 = (int*)malloc(LENGTH1 * sizeof(int));
    tab2 = (int*)malloc(LENGTH2 * sizeof(int));
    tab3 = (int*)malloc(LENGTH3 * sizeof(int));

    // table size
    printf("length1: %d\n", LENGTH1);
    printf("real1  : %d\n", *(tab1-1));
    printf("real1  : %d\n", *(tab1-2));
    printf("real1  : %d\n", *(tab1-3));

    printf("length2: %d\n", LENGTH2);
    printf("real2  : %d\n", *(tab2-1));
    printf("real2  : %d\n", *(tab2-2));
    printf("real2  : %d\n", *(tab2-3));

    printf("length3: %d\n", LENGTH3);
    printf("real3  : %d\n", *(tab3-1));
    printf("real3  : %d\n", *(tab3-2));
    printf("real3  : %d\n", *(tab3-3));

    return 0;

}