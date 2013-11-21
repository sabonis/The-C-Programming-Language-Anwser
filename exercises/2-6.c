#include <stdio.h>

unsigned setbits(int x, int p, int n, int y);
int main() {
    /*
    *   Testing case where 
    *   x = 1001, which is 9 and
    *   y = 0011, which is 3 and the expected
    *   r = 1111, which is 15.
    *   Test result is correct.
    */
    printf("%u\n", setbits(9, 2, 2, 3));
}

unsigned setbits(int x, int p, int n, int y) {
    
   return x & ~(~(~0 << n) << (p+1-n)) /* clear x n bit */
              |                        /* use OR to set x bit */
          (y & ~(~0 << n)) << (p+1-n); /* find rightmost n bits of y, and shift to the place u want */
}
