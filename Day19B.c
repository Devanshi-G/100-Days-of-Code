// To write a program to find the LCM of two numbers.
#include <stdio.h>

// Function to compute sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;

    // Taking Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));

    return 0;
}