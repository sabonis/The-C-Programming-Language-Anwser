/*
 *  A lazy version, I only check parenthesis not all.
 */

#include <stdio.h>

void printErrorMsg();
int main() {
    int c;
    int parenthesis = 0; // Count the number of parenthesis need to be paired.

    while ((c = getchar()) != EOF) {
        if (c == '(') {
            ++parenthesis;
        } else if (c == ')') {
            --parenthesis;
        }
        if (parenthesis < 0) {
            printErrorMsg();
            parenthesis = 0;
        }
    }

}
void printErrorMsg () {
    printf("Oops! There are unmatched parenthesis.");
}
