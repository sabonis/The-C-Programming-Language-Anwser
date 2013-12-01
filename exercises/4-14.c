#include <stdio.h>

#define swap(t, x, y)  { t _z; \
                        _z = y;\
                        y = x;\
                        x = _z;}

int main() {
    int i = 3, j = 5;
    swap(int, i, j);
    printf("%d\n", i);
}
