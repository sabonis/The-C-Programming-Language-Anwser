#include<stdio.h>

#define IN      0  // inside a word
#define OUT     1  // outsid a word
#define MAXWORD 10 // max word lenth

main()
{
	int c, i, state = OUT;
	int wordCounts[MAXWORD]; // words array
	int wordLenth;           // lenth of a word
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

	/* output */
	for (i = 1; i < MAXWORD; i++) {
		printf("%5d - %5d \n", i, wordCounts[i]);
	}
}
