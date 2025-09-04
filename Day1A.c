// To write a program to input two numbers and display their sum
#include <stdio.h>

int main() 
{
    float num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("The sum of %f and %f is %f\n", num1, num2, sum);

    return 0;
}