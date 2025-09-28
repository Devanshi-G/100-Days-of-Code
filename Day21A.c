//To write a c program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

// Function to count number of digits
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to swap first and last digits
int swapFirstLast(int num) {
    int digits = countDigits(num);

    if (digits == 1) {
        return num; // Only one digit, no swap needed
    }

    int lastDigit = num % 10;
    int firstDigit = num / (int)pow(10, digits - 1);
    int middlePart = (num % (int)pow(10, digits - 1)) / 10;

    // Construct the new number: last + middle + first
    int swappedNum = lastDigit * (int)pow(10, digits - 1) + 
                     middlePart * 10 + 
                     firstDigit;

    return swappedNum;
}

int main() {
    int number;

    // Taking Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = swapFirstLast(number);

    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}