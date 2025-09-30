// To write a program to check if number is a strong number.
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to check if a number is a Strong Number
int isStrongNumber(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == original);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrongNumber(number))
        printf("%d is a Strong Number.\n", number);
    else
        printf("%d is NOT a Strong Number.\n", number);

    return 0;
}