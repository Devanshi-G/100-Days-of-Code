/*Write a Program to take an array of integers as input, calculate the pivot index of this array.
 The pivot index is the index where the sum of all the numbers strictly to the left of the index 
 is equal to the sum of all the numbers strictly to the index's right. If the index is on the 
 left edge of the array, then the left sum is 0 because there are no elements to the left.
 This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.*/

#include <stdio.h>

// Function to find the pivot index of an array
int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        // The right sum is the total sum minus the left sum and the current element
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i; // Found the pivot index
        }

        leftSum += arr[i];
    }

    return -1; // No pivot index found
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);

    if (pivotIndex != -1) {
        printf("The pivot index is: %d\n", pivotIndex);
    } else {
        printf("No pivot index found. Output: -1\n");
    }

    return 0;
}