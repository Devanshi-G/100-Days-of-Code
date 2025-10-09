// To write a program to search in a sorted array using binary search.

#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Function to perform binary search
// Returns the index of the target if found, otherwise -1
int binarySearch(const int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to prevent potential overflow

        if (arr[mid] == target) {
            return mid; // Target found at mid index
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int size;

    // Get array size from user
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be positive. Exiting.\n");
        return 1;
    }

    // Allocate memory for the array
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        perror("Failed to allocate memory for the array");
        return 1;
    }

    // Get array elements from user (assuming they enter sorted elements)
    printf("Enter %d sorted integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;
    // Get the element to search for from user
    printf("\nEnter the element to search for: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Displaying the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    // Free the dynamically allocated memory
    free(arr);
    arr = NULL;

    return 0;
}