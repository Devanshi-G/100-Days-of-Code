//To write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

// Function to print primes up to the given limit
void show_primes_up_to(int max_number) {
    printf("Prime numbers between 1 and %d:\n", max_number);

    for (int current = 2; current <= max_number; current++) {
        if (is_prime(current)) {
            printf("%d ", current);
        }
    }

    printf("\n");
}

int main() {
    int user_input;

    printf("Enter a number: ");
    scanf("%d", &user_input);

    if (user_input < 2) {
        printf("No prime numbers in this range.\n");
    } else {
        show_primes_up_to(user_input);
    }

    return 0;
}