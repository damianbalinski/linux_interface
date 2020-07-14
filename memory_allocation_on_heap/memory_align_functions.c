#define _POSIX_C_SOURCE 200112L
#include <stdlib.h>
#include <malloc.h>

#define ALIGN 32

int main(void)
{
    char *tab1, *tab2, *tab3, *tab4, *tab5;

    tab1 = (char*)memalign(ALIGN, 91 * sizeof(int));
    tab2 = (char*)aligned_alloc(ALIGN, 64);

    tab3 = (char*)valloc(91);
    tab4 = (char*)pvalloc(91);

    posix_memalign((void**)&tab5, ALIGN * sizeof(void*), 99);

    printf("%p\n", tab1);
    printf("%p\n", tab2);
    printf("%p\n", tab3);
    printf("%p\n", tab4);
    printf("%p\n", tab5);

    return 0;
}