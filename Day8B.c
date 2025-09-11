// To write a program to input 3 numbers and find the largest among them using if else.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Taking Input
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
