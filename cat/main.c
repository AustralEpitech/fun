#include <stdio.h>
#include <stdlib.h>

static void printstream(FILE *in) {
    char l[2048];

    while (fgets(l, sizeof l, in)) {
        fputs(l, stdout);
    }
}

static void printfile(const char *name) {
    FILE *f = fopen(name, "r");

    printstream(f);
    fclose(f);
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printstream(stdin);
    }
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-' && !argv[i][1]) {
            printstream(stdin);
        } else {
            printfile(argv[i]);
        }
    }
    return 0;
}
