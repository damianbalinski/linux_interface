#define _GNU_SOURCE
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

#define call(fun) errno = 0; fun; perror(#fun)

void printid(char* type, uid_t id)
{
    printf("%s: %ld\n", type, (long)id);
}

int main(void)
{
    uid_t ruid, euid, suid, fsuid, suuid;

    // RUID
    //ruid = getuid();
    //printid("ruid", ruid);

    // EUID
    //euid = geteuid();
    //printid("euid", ruid);

    // RUID, EID, SUID
    // call(setresuid(2000, 2000, 2000));

    getresuid(&ruid, &euid, &suid);
    call(setuid(0));

    printid("ruid", ruid);
    printid("euid", euid);
    printid("suid", suid);

    return 0;
}