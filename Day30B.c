// To write a program to count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    // Iterate through the array to count elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("\n--- Element Counts ---\n");
    printf("Positive elements: %d\n", positiveCount);
    printf("Negative elements: %d\n", negativeCount);
    printf("Zero elements: %d\n", zeroCount);

    return 0;
}