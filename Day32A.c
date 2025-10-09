//To write a program to merge two arrays.

#include <stdio.h>
#include <stdlib.h> // For malloc and free
#include <string.h> // For memcpy

// Function to merge two arrays
int* mergeArrays(const int arr1[], int size1, const int arr2[], int size2) {
    int totalSize = size1 + size2;
    int* mergedArray = (int*)malloc(totalSize * sizeof(int));

    if (mergedArray == NULL) {
        perror("Failed to allocate memory for merged array");
        return NULL;
    }

    memcpy(mergedArray, arr1, size1 * sizeof(int));
    memcpy(mergedArray + size1, arr2, size2 * sizeof(int));

    return mergedArray;
}

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
    int sizeA, sizeB;

    //Get input for Array A
    printf("Enter the size of Array A: ");
    scanf("%d", &sizeA);

    if (sizeA <= 0) {
        printf("Array A size must be positive. Exiting.\n");
        return 1; // Indicate an error
    }

    // Allocating memory for Array A
    int* arrayA = (int*)malloc(sizeA * sizeof(int));
    if (arrayA == NULL) {
        perror("Failed to allocate memory for Array A");
        return 1;
    }

    printf("Enter %d elements for Array A:\n", sizeA);
    for (int i = 0; i < sizeA; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arrayA[i]);
    }

    //Get input for Array B
    printf("\nEnter the size of Array B: ");
    scanf("%d", &sizeB);

    if (sizeB <= 0) {
        printf("Array B size must be positive. Exiting.\n");
        free(arrayA); // Free previously allocated memory
        return 1;
    }

    // Allocating memory for Array B
    int* arrayB = (int*)malloc(sizeB * sizeof(int));
    if (arrayB == NULL) {
        perror("Failed to allocate memory for Array B");
        free(arrayA); // Free previously allocated memory
        return 1;
    }

    printf("Enter %d elements for Array B:\n", sizeB);
    for (int i = 0; i < sizeB; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arrayB[i]);
    }

    printf("\nArray A: ");
    printArray(arrayA, sizeA);

    printf("Array B: ");
    printArray(arrayB, sizeB);

    int totalSize = sizeA + sizeB;

    // Merge arrays
    int* merged = mergeArrays(arrayA, sizeA, arrayB, sizeB);

    if (merged != NULL) {
        printf("Merged Array: ");
        printArray(merged, totalSize);
        free(merged);
        merged = NULL;
    } else {
        printf("Error: Could not merge arrays due to memory issues.\n");
    }

    // Free the dynamically allocated input arrays
    free(arrayA);
    free(arrayB);
    arrayA = NULL;
    arrayB = NULL;

    return 0;
}