//To write a program to find the sum of the series: 2/3 + 4/7 + 6/11... upto n terms 
#include <stdio.h>

// Function to calculate a single term in the series
float calculateTerm(int termNumber) {
    int numerator = 2 * termNumber;
    int denominator = 3 + (termNumber - 1) * 4;
    return (float)numerator / denominator;
}

// Function to calculate sum of the series up to n terms
float calculateSeriesSum(int n) {
    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += calculateTerm(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float seriesSum = calculateSeriesSum(n);
    printf("Sum of the series up to %d terms is: %.4f\n", n, seriesSum);

    return 0;
}