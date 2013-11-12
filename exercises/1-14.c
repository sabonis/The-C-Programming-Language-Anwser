#include<stdio.h>
#include<ctype.h>

#define MAX_HISTOGRAM 15
#define NUMBER_OF_CHAR 127

int main()
{
    int c, i;
    int maxValue = 0;           // max value of a character
    int len;                    // lenth of histogram
    int nCount[NUMBER_OF_CHAR];

    // initialization
    for (i = 0; i < NUMBER_OF_CHAR; i++) {
        nCount[i] = 0;
    }

    while((c = getchar()) != EOF) {
        ++nCount[c];
    }

    /* find maximum value */
    for (i = 0; i < NUMBER_OF_CHAR; i++) {
        if(nCount[i] > maxValue)
            maxValue = nCount[i];
    }

    for (i = 0; i < NUMBER_OF_CHAR; i++) {
        if(isprint(i)) {
            printf("%3c", i);
        } else {
            printf("   ");
        }
        if((len = nCount[i] * MAX_HISTOGRAM / maxValue) <= 0) {
            len = 1;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
}
