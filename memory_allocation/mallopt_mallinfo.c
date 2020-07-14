#include <malloc.h>
#include <stdio.h>

int main(void)
{
    struct mallinfo m;

    // get malloc information
    m = mallinfo();

    printf("arena   : %d\n", m.arena);
    printf("ordblks : %d\n", m.ordblks);
    printf("smblks  : %d\n", m.smblks);
    printf("hblks   : %d\n", m.hblks);
    printf("hblkhd  : %d\n", m.hblkhd);
    printf("usmblks : %d\n", m.usmblks);
    printf("fsmblks : %d\n", m.fsmblks);
    printf("uordblks: %d\n", m.uordblks);
    printf("fordblks: %d\n", m.fordblks);
    printf("keepcost: %d\n", m.keepcost);

    //mallopt()

    M_PERTURB;
    
    return 0;
}