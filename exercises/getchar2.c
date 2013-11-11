#include <stdio.h>

main()
{
    int c, blanks = 0, tabs = 0, newlines = 0;

    while((c = getchar()) != EOF) {
        if(c == '\b'){
            printf("\\b");
        }
        else if(c == '\t') {
            printf("\\t");
        }
        else if(c == '\\') {
            printf("\\\\");
        } else {
 	    putchar(c);
	}
    }
}
