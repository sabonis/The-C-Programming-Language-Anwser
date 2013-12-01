#include <stdio.h>

void itoa(char s[], int n);
int main() {
    char s[100];
    int n = 500;
    itoa(s, n);
    printf("%s\n", s);
}

void itoa(char s[], int n) {
    static int i;
    if(n / 10) {
        itoa(s, n / 10);
    }
    s[i++] = n % 10 + '0';
    s[i] = '\0';
}
