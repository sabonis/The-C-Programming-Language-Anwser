#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 20;

    celsius = lower;
    // header
    printf("\nTemperature Conversion Table\n\n");
    while(celsius <= upper){
        fahr = celsius * 9.0 / 5.0 + 32;
        printf("%3.0f\t%6.0f\n", celsius, fahr);
        celsius += step;
    }
}
