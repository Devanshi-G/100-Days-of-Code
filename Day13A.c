// To write a program to implement a basic calculator using switch case.
#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    // Taking the Input
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Note: space before %c to consume any leftover whitespace

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch(op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;

        case '-':
            printf("Result: %d\n", num1 - num2);
            break;

        case '*':
            printf("Result: %d\n", num1 * num2);
            break;

        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", num1 / num2);
            }
            break;

        case '%':
            if(num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", num1 % num2);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}