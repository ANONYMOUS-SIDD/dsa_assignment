# Question 2 Documentation

## (a) Data Structure Definition
        The program uses two stacks:
1. `stack` for operators (char array) for converting infix to postfix
2. `stackVal` for storing operands (int array) when evaluating postfix

char stack[MAX];
int top = -1;

---

## (b) Functions Description

push(char c) – push operator onto stack
pop() – remove top element from stack
peek() – return top element without removing
precedence(char op) – returns operator precedence
isOperator(char c) – checks if character is an operator

infixToPostfix(char infix[], char postfix[]) – converts infix expression to postfix

evaluatePostfix(char postfix[]) – evaluates postfix expression and returns result

---

## (c) main() Overview
1. Input infix expression (single-digit numbers only)
2. Convert it to postfix using `infixToPostfix()`
3. Print postfix expression
4. Evaluate postfix using `evaluatePostfix()`
5. Print the result

---

## (d) Sample Output

Enter infix expression (single digit numbers only): 3+(2*4)
Postfix Expression: 324*+
Evaluation Result: 11
