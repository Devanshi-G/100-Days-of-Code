// To write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;

    // Taking the Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    printf("Numbers from 1 to %d:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}