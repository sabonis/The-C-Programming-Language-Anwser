#include <stdio.h>

#define MAXLINE  1000
#define LONGLINE 80

/* sorry for my java accent*/
int getCleanLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getCleanLine(line, MAXLINE)) > 0) {
            if (line[0] != '\n')
                printf("%s", line);
    }
}

int getCleanLine(char line[], int maxline) {
    int i, j, c;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if(c == '\n') {
        if (line[i-1] == '\t' || line[i-1] == ' ') {
            j = i;
            while (line[j-1] == '\t' || line[j-1] == ' ') {
                line[j] = '\0';
                line[j-1] = '\n';
                --j;
            }
            return j;
        } else {
            line[i] = c;
            ++i;
            line[i] = '\0';
            return i;
        }
    }
}
void copy(char to[], char from[]) {
    int i;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
