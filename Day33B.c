// To write a program to insert an element in a sorted array at the appropriate position.

#include <stdio.h>
#include <stdlib.h> // For malloc, realloc, and free

// Function to print an array
void printArray(const int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int size;

    // Get array size from user
    printf("Enter the initial number of elements in the sorted array: ");
    scanf("%d", &size);

    if (size <= 0) { // Allow empty array as a valid starting point
        printf("Starting with an empty array or a very small array.\n");
        size = 0; // Initialize size to 0 if invalid input, user can still insert
    }

    // Dynamically allocating memory for the array
    // Start with size elements. If size is 0, it allocates minimal or NULL.
    int* arr = (int*)malloc(size * sizeof(int));
    if (size > 0 && arr == NULL) { // Check if allocation failed for non-empty array
        perror("Failed to allocate memory for the array");
        return 1;
    }

    // Get array elements from user (assuming they enter sorted elements)
    if (size > 0) {
        printf("Enter %d sorted integer elements:\n", size);
        for (int i = 0; i < size; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
            // Optional: You could add a check here to ensure user enters sorted data
            // For simplicity, we assume the user provides sorted input.
        }
    } else {
        printf("Array is currently empty.\n");
    }

    printf("\nOriginal array: ");
    printArray(arr, size);

    int elementToInsert;
    // Get the element to insert from user
    printf("\nEnter the element you want to insert: ");
    scanf("%d", &elementToInsert);

    //Insertion

    // 1. Increase the array size by 1 and reallocate memory
    size++; // Increment size *before* reallocating
    int* temp_arr = (int*)realloc(arr, size * sizeof(int));

    if (temp_arr == NULL) {
        perror("Failed to reallocate memory for the array");
        free(arr); // Free original array if realloc fails
        return 1;
    }
    arr = temp_arr; // Update 'arr' pointer to the new memory block

    // 2. Find the correct position for the new element
    int i = size - 2; // Start from the last element of the original array
    // Shift elements greater than elementToInsert to the right
    while (i >= 0 && arr[i] > elementToInsert) {
        arr[i + 1] = arr[i];
        i--;
    }

    // 3. Insert the new element at the found position
    arr[i + 1] = elementToInsert;

    printf("\nArray after insertion: ");
    printArray(arr, size);

    // Free the dynamically allocated memory
    free(arr);
    arr = NULL;

    return 0;
}