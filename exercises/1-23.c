#include <stdio.h>

/* test */
#define MAXCHAR 1000

void rcomment(char c);
void inComment();
int main() {
    int c, i;
    int source[MAXCHAR]; // holding all characters

    while ((c = getchar()) != EOF) {
        rcomment(c);
    }
}

void rcomment(char c) {
    int d;
    if (c == '/') {
        if ((d = getchar()) == '*') {
            inComment();
        } else if(d == '/') {
            putchar(c);
            rcomment(d);
        } else {
            putchar(c);
            putchar(d);
        }
    } else {
        putchar(c);
    }
};

void inComment() {
    int c, d;
    c = getchar();
    d = getchar();
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}
