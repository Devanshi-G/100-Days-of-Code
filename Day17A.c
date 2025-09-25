//To write a program to check if a number is an Armstrong number.
#include <stdio.h>

// Integer power function to avoid floating point issues
int intPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    // Handle zero explicitly
    if (num == 0) {
        printf("0 is an Armstrong number.\n");
        return 0;
    }

    originalNum = num;

    // Count digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate sum of nth powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += intPow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}