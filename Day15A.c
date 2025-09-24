// To write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Taking the Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating the factorial using loop
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}