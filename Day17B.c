//To write a program to check if a number is a prime number.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrimeNumber(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrimeNumber(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}