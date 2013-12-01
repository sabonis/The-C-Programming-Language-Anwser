#include <stdio.h>
#include <string.h>

static char *lineptr[100];

int getline2(char *line);
int main() {
    char line[100], p[100];
    int nlines = 0;
    while (getline2(line) > 0) {
        //printf("%s", line);

        strcpy(p, line);
        lineptr[nlines++] = p;
        //printf("%s", lineptr[nlines++]);
    }
    printf("%s", lineptr[nlines - 1]);
}

int getline2(char *line) {
    int n = 0;
    char c;
    while((c = getchar()) != '\n' && c != EOF) {
        *line++ = c;
        ++n;
    }
    if (c == '\n') {
        *line++ = c;
        ++n;
    }
    *line = '\0';
    return n;
}
