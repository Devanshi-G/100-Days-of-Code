//To write a program to to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    // Taking Input 
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
