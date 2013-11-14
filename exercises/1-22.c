/*
 * Wrap long line.
 */

#include <stdio.h>

#define MAXCOLUMN 20

int main() {
    int i, c;

    while ((c = getchar()) != EOF) {
        if(i % MAXCOLUMN == 0) {
            putchar('\n');
        }
        putchar(c);
        ++i;
    }
}
