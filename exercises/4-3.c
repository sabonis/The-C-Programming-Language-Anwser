#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER 1

int calculate(char s[]);
char getTop(char s);
double pop();
void push(double f);

int main() {
    if(isdigit('\0')) {
        printf("fuck");
    }
    printf("%d\n", calculate("55+"));
}

int calculate(char s[]) {
    char c, stack[100], type;
    int i = 0;
    while((c = s[i++]) != '\0') {
        type = getTop(c);
        switch (type) {
            case NUMBER:
                push(c - '0');
                break;
            case '+':
                printf("+ executed");
                push(pop() + pop());
                break;
            default:
                return pop();
        }
    }
    return pop();
}
char getTop(char s) {
    if(isdigit(s)) {
        return NUMBER;
    }
    return s;
}

/* stack */
#define  MAXSTACK 100
double stack[MAXSTACK];
int sp = 0; // stack pointer

double pop() {
    if (sp > 0) {
        return stack[--sp];
    } else {
        printf("error : stack empty!");
    }
}

void push(double f) {
    if (sp > MAXSTACK) {
        printf("error : stack full!");
    } else {
        stack[sp++] = f;
    }
}
