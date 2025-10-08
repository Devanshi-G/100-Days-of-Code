//To write a program to reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reversing the array in-place (without extra space)
    int start = 0;
    int end = n - 1;
    int temp; // Temporary variable for swapping

    while (start < end) {
        // Swap elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end pointers towards the center
        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}