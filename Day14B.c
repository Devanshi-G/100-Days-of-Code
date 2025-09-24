// To write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() 
{
    int n;
    long long product = 1; // long long is used to handle large results 
    int even;

    // Taking the Input 
    printf("Enter the number till which the product of the even number is to be taken: ");
    scanf("%d", &n);

    // Loop from 2 to n and multiply even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        even = 1;
    }

    if (even)
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    else
        printf("There are no even numbers between 1 and %d.\n", n);

    return 0;
}