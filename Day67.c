/*Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted. Print the merged array.*/

#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and compare elements
    while (i < size1 && j < size2) {
        // If the element in the first array is smaller or equal, add it to the merged array
        if (arr1[i] <= arr2[j]) {
            mergedArray[k] = arr1[i];
            i++;
        } else {
            // If the element in the second array is smaller, add it to the merged array
            mergedArray[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If elements are remaining in the first array, add them to the merged array
    while (i < size1) {
        mergedArray[k] = arr1[i];
        i++;
        k++;
    }

    // If elements are remaining in the second array, add them to the merged array
    while (j < size2) {
        mergedArray[k] = arr2[j];
        j++;
        k++;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size1, size2;

    // User Input for the First Array
    printf("Enter the size of the first sorted array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of the first sorted array in ascending order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    //User Input for the Second Array
    printf("\nEnter the size of the second sorted array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of the second sorted array in ascending order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    //Merging the Arrays
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    // Call the function to merge the two arrays
    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);

    //Displaying the Merged Array
    printf("\nThe merged and sorted array is:\n");
    printArray(mergedArray, mergedSize);

    return 0;
}