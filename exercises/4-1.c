#include <stdio.h>
#include <string.h>

int getline2(char s[]);
int stirngindex(char s[], char t[]);
int main() {
    int t;
    char s[1000];

    while (getline2(s) > 0) {
        if((t = stirngindex(s, "Michael")) > 0)
            printf("%d", t);
    }
}

int getline2(char s[]) {
    int c, i = 0;

    while((c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if(c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
int stirngindex(char s[], char t[]) {
    int i, j, k;
    for (i = 0; i < strlen(s); i++) {
        for (j = i, k = 0; s[j] == t[k]; j++, k++) {

        }
        if(k > 0 && t[k] == '\0') {
            return j;
        }
    }
    return -1;
}
