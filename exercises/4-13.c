#include <stdio.h>
#include <string.h>

void reverse(char s[]);
int main() {

}

void reverse(char s[]) {
    int i = 0, j = strlen(s);
    char tmp;
    if(i <= j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
