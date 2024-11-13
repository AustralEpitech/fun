#include <stdio.h>
#include <string.h>

static bool is_palindrome(const char *s)
{
    const char *e = s + strlen(s) - 1;

    while (*s++ == *e-- && s < e);
    return *--s == *++e;
}

int main(int argc, char *argv[])
{
    if (is_palindrome(argv[1])) {
        puts("Palindrome");
    } else {
        puts("Not palindrome");
    }
    return 0;
}