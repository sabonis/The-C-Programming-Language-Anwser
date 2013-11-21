#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int base);
void reverse(char s[]);

int main() {
    char s[100];

    itob(3, s, 16);
    printf("%s\n", s);
}

void itob(int n, char s[], int base) {
    int i = 0, tmp;

    do {
        tmp = n % base;
        s[i++] = tmp > 9 ? 'A' + tmp - 10 : '0' + tmp;
    } while((n /= base) > 0);
    s[i] = '\0';
    reverse(s);
};

void reverse(char s[]) {
    int i, j, tmp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
