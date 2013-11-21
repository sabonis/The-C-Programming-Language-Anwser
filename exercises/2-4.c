#include <stdio.h>

int squeeze(char s1[], char s2[]);
int main() {
   // test case
   char s[] = "I am Michael";
   squeeze(s, "am");
   printf("%s\n", s);
}

int squeeze(char s1[], char s2[]) {
    int i; // pointer for original array
    int j; // pointer for remove-when-matched array
    int k; // pointer for result array

    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++) {
            /* Do nothing */
        }
        if (s2[j] == '\0') {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}
