#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

main()
{
    float fahr, celsius;
    float lower, upper, step;

    // header
    printf("\nTemperature Conversion Table\n\n");
    for (fahr = UPPER; fahr >= LOWER; fahr-=STEP) {
        celsius = 5.0 / 9.0 * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
}
