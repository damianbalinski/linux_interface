#define _BSD_SOURCE
#include <stdio.h>
#include <grp.h>
#include <unistd.h>
#include <limits.h>

int main(void)
{
    // list of groups
    gid_t grouplist[NGROUPS_MAX + 1];
    int amount;

    // gets gourps list
    amount = getgroups(NGROUPS_MAX, grouplist);

    // prints groups list
    printf("amount: %d\n", amount);
    for(int i = 0; i < amount; i++)
        printf("gr %d: %ld\n", i, (long)grouplist[i]);

    // init groups list
    int res = initgroups("gumises", 20);
    printf("%d\n", res);

    return 0;
}