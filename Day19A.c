//To write a program to find the sum of the digits of a number.

#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Taking Input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}