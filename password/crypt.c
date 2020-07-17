#include <stdio.h>
#include <crypt.h>

#define PASSWD1 "aaaaaaaaxxx"
#define PASSWD2 "aaaaaaaayyy"
#define PASSWD3 "aaaaaaazzzz"

#define SALT1 "aaa"
#define SALT2 "aab"
#define SALT3 "acc"

// compile with:
// gcc -o test crypt.c -lcrypt
int main(void)
{
    // printf("%s\n", crypt("aaa", "aa"));
    // printf("%s\n", crypt("bbb", "bb"));
    // printf("%s\n", crypt("ccc", "cc"));
    // printf("%s\n", crypt("ddd", "dd"));

    printf("%s\n", crypt(PASSWD1, SALT1));
    printf("%s\n", crypt(PASSWD2, SALT1));
    printf("%s\n", crypt(PASSWD3, SALT1));
    putchar('\n');

    printf("%s\n", crypt(PASSWD1, SALT1));
    printf("%s\n", crypt(PASSWD1, SALT2));
    printf("%s\n", crypt(PASSWD1, SALT3));

    printf("%s\n", crypt("xyzabcde", "aa"));

    return 0;
}