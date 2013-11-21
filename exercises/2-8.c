#include <stdio.h>

int rightrot(int x, int n);
int main(void) {
    //printf("%u\n", wordlength());
    printf("%d\n", rightrot(3, 1));
}

int rightrot(int x, int n) {
    int wordlength(void);
    while (n-- > 0) {
        x = x >> 1;
        x = x | (unsigned) ((x & 1) << (wordlength() - 1));
    }
    return x;
}

int wordlength(void) {
    int i;
    unsigned w = (unsigned) ~0;

    for (i = 1; (w = w >> 1) > 0; i++) 
        ;
    return;
}
