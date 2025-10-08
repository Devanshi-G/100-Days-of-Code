//To write a program to count even and odd numbers in an array.

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

    int evenCount = 0;
    int oddCount = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}