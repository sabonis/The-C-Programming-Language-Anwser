
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float fahr2celsius(float fahr);

int main()
{
    float fahr;
    float lower, upper, step;

    // header
    printf("\nTemperature Conversion Table\n\n");
    for (fahr = UPPER; fahr >= LOWER; fahr-=STEP) {
        printf("%3.0f\t%6.1f\n", fahr, fahr2celsius(fahr));
    }
    return 0;
}

float fahr2celsius(float fahr) {
    return 5.0 / 9.0 * (fahr-32.0);
}
