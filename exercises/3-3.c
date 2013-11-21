#include <stdio.h>

void expand(char s1[], char s2[]);
int main() {
    char s2[100];
    expand("a-k0-9A-Z\n", s2);
    printf("%s", s2);
}

void expand(char s1[], char s2[]) {
    int c, i, j;

    for (i = 0, j = 0; (c = s1[i++]);)  {
        if (s1[i] == '-' && s1[i+1] >= c) {
            i++;
            while (c < s1[i]) {
                s2[j++] = c++;
            }
        } else {
            s2[j++] = c;
        }
    }
    s2[j] = '\0';
}
