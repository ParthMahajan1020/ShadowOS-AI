#include <stdio.h>

void calculator() {
    float a, b;
    char op;
    int validOp = 0;

    printf("Enter first number (a): ");
    scanf("%f", &a);

    // Flush leftover newline
    while (getchar() != '\n');

    // Retry loop for valid operator
    while (!validOp) {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op);

        if (op == '+' || op == '-' || op == '*' || op == '/') {
            validOp = 1;  // valid operator
        } else {
            printf("Invalid operator. Please enter +, -, *, or /.\n");
        }

        // Flush newline after operator
        while (getchar() != '\n');
    }

    printf("Enter second number (b): ");
    scanf("%f", &b);

    // Perform calculation
    switch (op) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", a / b);
            }
            break;
    }

    // Final input flush
    while (getchar() != '\n');
}
