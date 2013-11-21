#include <stdio.h>

void escape(char s[], char t[]);
int main() {
    int i;
    char s[100];

    for (i = 0; i < 100; i++) {
        s[i] = 0;
    }

    escape(s, "Michael is\t a\n");
    printf("%s", s);
}

void escape(char s[], char t[]) {
    int i, j, c;

    for (i = 0, j = 0; (c = t[i]) != '\0'; i++) {
        switch (c) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = c;
        }
    }
    s[j] = '\0';
}
