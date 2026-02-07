#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        top++;
        stack[top] = c;
    }
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '[' && close == ']') return 1;
    if (open == '{' && close == '}') return 1;
    return 0;
}

int isBalanced(char exp[]) {

    top = -1;

    for (int i = 0; i < strlen(exp); i++) {

        char ch = exp[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            char popped = pop();

            if (!isMatching(popped, ch)) {
                return 0;
            }
        }
    }

    if (top == -1)
        return 1;
    else
        return 0;
}

int main() {

    char *tests[] = {
            "a + (b - c) * (d",
            "m + [a - b * (c + d * {m)]",
            "a + (b - c)"
    };

    int n = 3;

    for (int i = 0; i < n; i++) {

        printf("Expression: %s\n", tests[i]);

        if (isBalanced(tests[i]))
            printf("Balanced Parentheses\n\n");
        else
            printf("Not Balanced\n\n");
    }

    return 0;
}
