//To write a program to check if a number is a perfect number.
#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;

    // Find sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals the number
    return sum == num;
}

int main() {
    int number;

    // Taking Input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (isPerfect(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is not a Perfect Number.\n", number);
    }

    return 0;
}