// To write a program to find the digit that occurs the most times in an integer number.

#include <stdio.h>

// Function to find the most frequent digit in an integer
int findMostFrequentDigit(int num) {
    if (num == 0) {
        return 0; // The digit 0 occurs once
    }

    if (num < 0) {
        num = -num; // Converting negative to positive for digit extraction
    }

    int digitCount[10] = {0}; // Initialize all counts to 0

    // Extracting digits and updating their counts
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    int mostFrequentDigit = 0; // Default to 0
    int maxCount = 0;          // Initialize to 0

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    return mostFrequentDigit;
}

int main() {
    int userNumber; // Variable to store the user's input

    printf("Enter an integer number: ");
    scanf("%d", &userNumber); // Read the integer from the user

    int mostFrequent = findMostFrequentDigit(userNumber); // Call the function with user's number

    printf("The digit that occurs the most times in %d is: %d\n", userNumber, mostFrequent);

    return 0;
}