#include <stdio.h>
#include <pwd.h>

int main(void)
{
    struct passwd* user;
    user = getpwnam("gumises");
    
    printf("%p\n", user);
    printf("name  : %s\n", user->pw_name);
    printf("passwd: %s\n", user->pw_passwd);
    printf("uid   : %d\n", (int)user->pw_uid);
    printf("gid   : %d\n", (int)user->pw_gid);
    printf("gecos : %s\n", user->pw_gecos);
    printf("dir   : %s\n", user->pw_dir);
    printf("shell : %s\n", user->pw_shell);
    
    return 0;
}