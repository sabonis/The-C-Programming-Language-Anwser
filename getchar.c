#include <stdio.h>

main()
{
    int c, blanks = 0, tabs = 0, newlines = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ')
            ++blanks;
        if(c == '\t')
            ++tabs;
        if(c == '\n')
            ++newlines;
    }
    printf("\n==================================\n");
    printf("blanks   = %6d\n", blanks);
    printf("tabs     = %6d\n", tabs);
    printf("newlines = %6d\n", newlines);
    printf("==================================\n");
}
