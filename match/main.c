#include <stdio.h>

int match(const char *s1, const char *s2) {
    return (*s2 == '*' && (match(s1, s2 + 1) || (*s1 && match(s1 + 1, s2)))) ||
        (*s1 == *s2 && (*s1 == '\0' || match(s1 + 1, s2 + 1)));
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }
    match(argv[1], argv[2]) && puts("Match!") || puts("No match...");
    return 0;
}
