#include <stdio.h>

static void print_anagrams(char *s)
{
    static char *p = NULL;
    char tmp;

    p = p ? p : s;
    if (!*s) {
        puts(p);
        return;
    }
    for (int i = 0; s[i]; i++) {
        tmp = s[i];
        s[i] = *s;
        *s = tmp;
        print_anagrams(s + 1);
        *s = s[i];
        s[i] = tmp;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        return 1;
    }
    print_anagrams(argv[1]);
    return 0;
}
