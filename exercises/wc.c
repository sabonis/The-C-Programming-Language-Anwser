#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, state = OUT;

	while((c = getchar()) != EOF) {
		if(c == '\t' || c == '\n' || c == ' ') {
			if(state == IN) {
				putchar('\n');
				state = OUT;
			}
		} else {
			if(state == OUT) 
				state = IN;
			putchar(c);
		}
	}
}
