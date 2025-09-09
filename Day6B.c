//To write a program to input an integer and check whether it is positive, negative or zero using nested if–else. 
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if number is positive, negative or zero using nested if-else
    if (number >= 0) {
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
