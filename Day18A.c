// To write a program to print all factors of a given number.
#include <stdio.h>
#include <math.h>

// Function to print all factors of a number
void printFactors(int num) {
    printf("Factors of %d are: ", num);

    // Loop till sqrt(num) 
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d ", i);
            if (i != num / i) {
                printf("%d ", num / i);
            }
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printFactors(num);

    return 0;
}