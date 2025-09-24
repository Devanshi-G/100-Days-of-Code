//To write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking the input
    printf("Enter the n number of odd numbers whose sum is to be calculated: ");
    scanf("%d", &n);

    // Calculating sum of first n odd numbers
    for (int i = 0; i < n; i++) {
        int odd = 2 * i + 1;
        sum += odd;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}