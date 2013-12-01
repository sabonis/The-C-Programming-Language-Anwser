#include <stdio.h>
#include <ctype.h>

static char stack[100];
static char *sp = stack;

void push(char c);
char pop();

int main(int argc, char *argv[]) {
    while(--argc > 0) {
        char c = (*++argv)[0];
        putchar(c);
        if(isdigit(c)) {
            push(c - '0');
        } else if(c == '+') {
            push(pop() + pop());
        } else if (c == 'x') {
            push(pop() * pop());
        }
    }
    while(sp - stack > 0) {
        printf("%d\n", pop());
        //char c = pop();
    }
}

void push(char c) {
    *sp++ = c;
}

char pop() {
    return *--sp;
}
