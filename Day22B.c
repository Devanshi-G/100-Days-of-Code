//To write a program to find the sum of the series: 1+ 3/4 + 5/6 +7/8....upto n terms
#include <stdio.h>

// Function to calculate a single term of the series
float term(int i) {
    return (float)(2 * i - 1) / (2 * i);
}

// Function to calculate the sum of the series up to n terms
float calculateSeriesSum(int n) {
    float sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += term(i);
    }

    return sum;
}

int main() {
    int n;
    float result;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    result = calculateSeriesSum(n);
    printf("Sum of the series up to %d terms is: %.4f\n", n, result);

    return 0;
}