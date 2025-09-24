// To write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, reversed = 0, original, digit;

    // Taking the Input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store the original number

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    // Check if original and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}