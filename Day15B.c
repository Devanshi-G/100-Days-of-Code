// To write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Taking the Input
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Storing the original number for display

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;           // Get the last digit
        reversed = reversed * 10 + digit; // Add it to the reversed number
        num /= 10;                        // Remove the last digit
    }

    printf("Reversed number of %d is: %d\n", original, reversed);

    return 0;
}