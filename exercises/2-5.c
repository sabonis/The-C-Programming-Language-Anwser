#include <stdio.h>

#define DEFAULT -1

int any(char s1[], char s2[]);
int main() {
   // test case
   char s[] = "I am Michael";
   printf("%d\n", any(s, "l"));
}

int any(char s1[], char s2[]) {
    int i; // pointer for original array
    int j; // pointer for remove-when-matched array

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) { /* There is a match */
                return i;
            }
        }
    }
    return DEFAULT;
}
