#include <stdio.h>

#define MAXLINE  1000
#define LONGLINE 80

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline2(line, MAXLINE)) > 0) {
        if(len > LONGLINE)
            printf("\n The number of longest line is %d\n", len);
    }
}

int getline2(char line[], int maxline) {
    int i, c;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if(c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}
void copy(char to[], char from[]) {
    int i;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
