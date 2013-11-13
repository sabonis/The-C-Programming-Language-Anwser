#include <stdio.h>

#define MAXLINE  1000
#define LONGLINE 80

int getLine2(char line[]);
int reverse(char line[]);
int main() {
    char line[MAXLINE]; // store line here

    while (getLine2(line) >= 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}
int reverse(char line[]) {
    int i = 0, j = 0;
    char tmp;
 
    // copy array
    while (line[i] != '\0') {
        ++i;
    }
    --i;
    if (line[i] == '\n') {
        --i;
    }
    while (j < i) {
        tmp = line[j];
        line[j] = line[i];
        line[i] = tmp;
        --i;
        ++j;
    }
}
int getLine2(char line[]) {
    int i, c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    ++i;
    return i;
}

