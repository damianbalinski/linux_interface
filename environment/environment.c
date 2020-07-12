#include <stdio.h>
#include <stdlib.h>

#define TEMP2 "TEMP2=XXXXXXXXXXXXXXXX"
#define NAME2 "Name2"
#define VALUE2 "value2"

int main(void)
{
    char* test;
    char TEMP[] = "TEMP=Hahahaha";
    char NAME[] = "Name";
    char VALUE[] = "value";

    // GETENV TEST
    test = getenv("PATH");
    printf("%s\n", test);

    // // PUTENV TEST
    putenv(TEMP);
    putenv(TEMP2);
    test = getenv("TEMP");
    printf("%s\n", test);
    test = getenv("TEMP2");
    printf("%s\n", test);

    // CLEARENV
    clearenv();
    test = getenv("TEMP");
    printf("%p\n", test);
    test = getenv("TEMP2");
    printf("%p\n", test);

    // SETENV TEST
    setenv(NAME, VALUE, 0);
    setenv(NAME2, VALUE2, 0);
    test = getenv("Name");
    printf("%s\n", test);
    test = getenv("Name2");
    printf("%s\n", test);

    // UNSETENV TEST
    unsetenv("Name");
    unsetenv("Name2");
    test = getenv("Name");
    printf("%p\n", test);
    test = getenv("Name2");
    printf("%p\n", test);

    return 0;
}