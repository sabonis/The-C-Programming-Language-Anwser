#include<stdio.h>

int main() {
    int i;
    int x = 120;
    for (i = 0; x != 0; x &= (x - 1))
        i++;

    printf("%d", i);
}
