#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char c;
    printf("%s\n", argv[0]);
    if (strcmp(argv[0], "lower")) {
        while ((c = getchar()) != EOF) {
            putchar(toupper(c));
        }
    } else {
        while ((c = getchar()) != EOF) {
            putchar(tolower(c));
        }
    }
}
