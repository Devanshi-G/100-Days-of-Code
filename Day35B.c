//To write a program to rotate an array to the right by k positions.

#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to rotate array right by k positions using a temporary array
void rotateRightTempArray(int arr[], int n, int k) {
    if (n == 0 || k == 0) {
        return; // No rotation needed for empty array or k=0
    }

    // Normalize k: k can be greater than n, so we take modulo n
    k = k % n;
    if (k == 0) {
        return; // No rotation needed if k is a multiple of n
    }

    // Create a temporary array to store the last k elements
    int *temp = (int *)malloc(k * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Copy the last k elements into the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the first n-k elements to the right
    // Start from the element that will move furthest to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the elements from the temporary array to the beginning of the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    free(temp); // Free the dynamically allocated memory
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Rotate by 3 positions to the right

    printf("Original array: ");
    printArray(arr, n);

    rotateRightTempArray(arr, n, k);

    printf("Array after rotating right by %d positions: ", k);
    printArray(arr, n);

    // --- Another example ---
    int arr2[] = {10, 20, 30, 40, 50};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 8; // k > n, should behave like k=3 (8 % 5 = 3)

    printf("\nOriginal array 2: ");
    printArray(arr2, n2);

    rotateRightTempArray(arr2, n2, k2);

    printf("Array 2 after rotating right by %d positions: ", k2);
    printArray(arr2, n2);

    return 0;
}