#include<stdio.h>

#define IN      0       // inside a word
#define OUT     1       // outsid a word
#define MAXWORD 10      // max word lenth
#define MAXHISTOGRAM 15 // max histogram lenth

main()
{
	int c, i, state = OUT;
	int wordCounts[MAXWORD]; // words array
	int wordLenth;           // lenth of a word
    int len = 0;             // lenth of histogram
    int maxValue = 0;        // max value of words
	int overflow = 0;        // number of overflow words

	/* initialization */
	for(i = 0; i < MAXWORD; i++) {
		wordCounts[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == '\n' || c == ' ') {
			/* end of a worjkjd */
			if (wordLenth > 0) {
				if (wordLenth < MAXWORD) {
					++wordCounts[wordLenth];
				} else {
					++overflow;
				}
			}
			wordLenth = 0;
			state = OUT;
		} else if (state == OUT) {
			/* beginning of a new word */
			state = IN;					
			wordLenth = 1;
		} else {
			/* inside a word */
			++wordLenth;    
		}
	}

    /* find max value */
	for (i = 0; i < MAXWORD; i++) {
        if(wordCounts[i] > maxValue)
            maxValue = wordCounts[i];
    }

	/* output */
	for (i = 1; i < MAXWORD; i++) {
		printf("%5d - %5d :", i, wordCounts[i]);
        if (wordCounts[i] > 0) {
            len = wordCounts[i] * MAXHISTOGRAM / maxValue;
        } else {
            len = 1;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
	}
}
