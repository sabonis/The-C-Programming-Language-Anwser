#include <stdio.h>

#define NO 0
#define YES 1

int htoi2(char s[]);

int main() {
    int i = htoi2("0x107");
    printf("%d\n", i);
}

int htoi2(char s[]) {
    int i = 0;
    int inHex = YES;
    int result = 0;
    int hexdigit;
    
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X') {
            ++i;
        }
    }

    for (; inHex == YES; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            hexdigit = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            hexdigit = 10 + s[i] - 'a' ;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            hexdigit = 10 + s[i] - 'A' ;
        } else {
            inHex = NO;
        }

        if (inHex == YES) {
            result = 16 * result + hexdigit;
        }
    }
    return result;
}
