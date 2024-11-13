#include <stdio.h>
#include <stdlib.h>

static void print_branches(int n) {
    for (int i = 1; i < n; i++) {
        printf(
            " else if (n == %d) {\n"
            "        puts(\"%s\");\n"
            "    }",
            i, i % 2 ? "Odd!" : "Even!"
        );
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }
    printf(
        "#include <stdio.h>\n"
        "#include <stdlib.h>\n\n"
        "int main(int argc, char *argv[]) {\n"
        "    int n;\n\n"
        "    if (argc != 2) {\n"
        "        return 1;\n"
        "    }\n"
        "    n = atoi(argv[1]);\n"
        "    if (n == 0) {\n"
        "        puts(\"Even!\");\n"
        "    }"
    );
    print_branches(atoi(argv[1]));
    printf(
        "\n    return 0;\n"
        "}\n"
    );
    return 0;
}
