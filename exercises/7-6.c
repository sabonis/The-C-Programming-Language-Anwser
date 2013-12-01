#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f0, *f1;
    char s[100];
    char s1[] = "fucka";
    char s2[] = "fuck";

    printf("%d", strcmp(s1, s2));
    putchar(strcmp(s1, s2));
    system("date");
    /*
    f0 = fopen(argv[1], "r");
    f1 = fopen(argv[2], "r");

    putchar(getc(f0));
    putchar(getc(f0));
    putchar('\t');
    fputs(fgets(s, 100, f0), stdout);
    */
}
