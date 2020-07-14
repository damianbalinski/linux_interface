#include <stdio.h>
#include <sys/types.h>
#include <grp.h>

int main(void)
{
    struct group* gr;
    char** temp;
    gr = getgrnam("lxd");

    printf("%p\n", gr);
    printf("name  : %s\n", gr->gr_name);
    printf("passwd: %s\n", gr->gr_passwd);
    printf("gid   : %d\n", (int)gr->gr_gid);
    printf("mem   : ");
    temp = gr->gr_mem;
    while(*temp != NULL)
    {
        printf("%s, ", *temp);
        temp++;
    }
        
    return 0;
}