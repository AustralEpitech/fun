#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

static char *genstr(const char *o, char *n)
{
    int count;
    char *oldn = n;

    for (int i = 0; o[i] && i < SIZE; i += count) {
        for (count = 0; o[i + count] == o[i]; count++);
        *n++ = count + '0';
        *n++ = o[i];
    }
    return oldn;
}

static void conway(int n)
{
    char s[2][SIZE] = {{0}, "1"};

    puts(s[1]);
    for (int i = 1; i < n; i++) {
        puts(genstr(s[i % 2], s[(i + 1) % 2]));
    }
}

int main(int argc, char *argv[])
{
    int n;

    if (argc != 2) {
        return 1;
    }
    n = atoi(argv[1]);
    if (n < 1) {
        return 1;
    }
    conway(n);
    return 0;
}
