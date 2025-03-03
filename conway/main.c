#include <stdio.h>
#include <stdlib.h>

#define SIZE 2048

static char *genstr(const char *o, char *n) {
    int count, ni = 0;

    for (int i = 0; o[i] && ni < SIZE - 2; i += count) {
        for (count = 0; o[i + count] == o[i]; count++);
        n[ni++] = count + '0';
        n[ni++] = o[i];
    }
    return n;
}

static void conway(int n) {
    char s[2][SIZE] = {{0}, "1"};

    puts(s[1]);
    for (int i = 1; i < n; i++) {
        puts(genstr(s[i % 2], s[(i + 1) % 2]));
    }
}

int main(int argc, char *argv[]) {
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
