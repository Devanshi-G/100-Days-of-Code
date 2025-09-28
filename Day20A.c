//To write a program find the product of odd digits of a number.
#include <stdio.h>

// Function to calculate the product of odd digits
int productOfOddDigits(int num) {
    int product = 1;
    int hasOdd = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (!hasOdd) {
        return 0;  // No odd digits found
    }

    return product;
}

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = productOfOddDigits(num);

    if (result == 0) {
        printf("No odd digits found in %d\n", num);
    } else {
        printf("Product of odd digits of %d is %d\n", num, result);
    }

    return 0;
}