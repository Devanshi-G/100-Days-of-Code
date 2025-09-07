//To write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() 
{
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is a positive number
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
