#include<stdio.h>

#define NUMBER_OF_CHAR 26

main()
{
    int c, i;
    int charBase;
    int nCount[NUMBER_OF_CHAR];

    // initialization
    charBase = 'a';
    for (i = 0; i < NUMBER_OF_CHAR; i++) {
        nCount[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c >= 'A' && c <= 'Z') {
            ++nCount[c-'A']; // uppercase character case
        } else if(c >= 'a' && c <= 'z') {
            ++nCount[c-'a']; // lowercase character case
        }
    }

    // header
    putchar('\n');
    for (i = 0; i < NUMBER_OF_CHAR; i++) {
        printf("%3c", charBase+i);
    }
    // separator
    printf("\n=================================================================================\n");
    // char counts
    putchar('\n');
    for (i = 0; i < NUMBER_OF_CHAR; i++) {
        printf("%3d", nCount[i]);
    }
    putchar('\n');
}
