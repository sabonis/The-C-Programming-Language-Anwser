#include <stdio.h>

int main() {
    int i, c;

    while((c = getchar()) != EOF) {
        putchar((c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c);
    }
}
