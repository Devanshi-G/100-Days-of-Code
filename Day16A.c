// To write a program to to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    int binary[32]; // To store binary digits (for 32-bit integers)
    int i = 0;

    // Taking the Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Handle the special case when number is 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}