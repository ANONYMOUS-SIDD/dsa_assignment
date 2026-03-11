#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

char peek() {
    if (top == -1) return '\0';
    return stack[top];
}

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int isOperator(char c) {
    return (c=='+' || c=='-' || c=='*' || c=='/');
}

void infixToPostfix(char infix[], char postfix[]) {
    int k=0;
    for(int i=0; i<strlen(infix); i++){
        char c = infix[i];

        if(isdigit(c)){
            postfix[k++] = c;
        }
        else if(c == '('){
            push(c);
        }
        else if(c == ')'){
            while(peek() != '(') postfix[k++] = pop();
            pop();
        }
        else if(isOperator(c)){
            while(top != -1 && precedence(peek()) >= precedence(c))
                postfix[k++] = pop();
            push(c);
        }
    }

    while(top != -1) postfix[k++] = pop();
    postfix[k] = '\0';
}

int evaluatePostfix(char postfix[]){
    int stackVal[MAX], topVal=-1;

    for(int i=0; i<strlen(postfix); i++){
        char c = postfix[i];

        if(isdigit(c)){
            stackVal[++topVal] = c - '0';
        }
        else if(isOperator(c)){
            int b = stackVal[topVal--];
            int a = stackVal[topVal--];

            switch(c){
                case '+': stackVal[++topVal] = a + b; break;
                case '-': stackVal[++topVal] = a - b; break;
                case '*': stackVal[++topVal] = a * b; break;
                case '/': stackVal[++topVal] = a / b; break;
            }
        }
    }

    return stackVal[topVal];
}

int main(){
    char infix[100], postfix[100];

    printf("Enter infix expression (single digit numbers only): ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Evaluation Result: %d\n", result);

    return 0;
}
