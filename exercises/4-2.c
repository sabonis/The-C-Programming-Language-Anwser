#include <stdio.h>
#include <ctype.h>

/* This is a awful one. */
int main() {
    int c, i = 0;
    double n = 0;
    char s[100], t[100];
    char intergral[100], fraction[100];

    while ((c = getchar()) != '\n' && c != '.') {
        intergral[i++] = c;
    }
    intergral[i] = '\0';

    i = 0;
    while ((c = getchar()) != '\n' && c != 'e' && c != 'E') {
        fraction[i++] = c;
    }
    fraction[i] = '\0';

    i = 0;
    /* Intergral part */
    while ((c = intergral[i++]) != '\0') {
        n = n * 10 + c - '0';
    }

    i = 0;
    double frac = 0;
    double tmp = 1;
    /* Fraction part */
    while ((c = fraction[i++]) != '\0') {
        frac = frac * 10 + c - '0';
        tmp /= 10;
    }

    n += frac * tmp;

    int exp;
    for (exp = 0; isdigit(c = getchar()); ) {
        exp = 10 * exp + c - '0';
    }
    printf("%d\n", exp);
    while (exp-- > 0) {
        n *= 10;
    }
    printf("%f", n);
}
