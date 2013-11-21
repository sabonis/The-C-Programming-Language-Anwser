#include <stdio.h>

int invert(int x, int p, int n);
int main() {
    printf("%u\n", invert(9, 2, 2));
}

int invert(int x, int p, int n) {
    /* the ultimate solution is to use XOR with target bit set all 1s and 0s for the remainder */
    return x  ^ ~(~0 << n) << (p+1-n); 
}
