// To write a program to find the HCF of two numbers. 
#include <stdio.h>

// Function to compute HCF using Euclidean algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    int hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}