/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. You need to print the first and last 
occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.*/

#include <stdio.h>

/*This function finds the FIRST occurrence of the target number.
 It uses a modified binary search. Even when it finds the target,
 it keeps looking in the left half of the array to see if an earlier one exists.
 Parameters:
 *   nums[]: The sorted array of numbers.
 *   size: The number of elements in the array.
 *   target: The number we are searching for.
 *
 * Returns:
 *   The index of the first occurrence, or -1 if the target is not found.
 */
int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int result = -1; // Default to -1 (not found)

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid;       // Found it! Store this index.
            high = mid - 1;     // But keep searching on the left side for an even earlier one.
        } else if (nums[mid] < target) {
            low = mid + 1;      // The number at mid is too small, so search the right side.
        } else {
            high = mid - 1;     // The number at mid is too big, so search the left side.
        }
    }
    return result;
}

/*
 * This function finds the LAST occurrence of the target number.
 * It's very similar to the first function, but when it finds the target,
 * it keeps looking in the right half of the array to find the very last one.
 *
 * Parameters:
 *   nums[]: The sorted array of numbers.
 *   size: The number of elements in the array.
 *   target: The number we are searching for.
 *
 * Returns:
 *   The index of the last occurrence, or -1 if the target is not found.
 */
int findLastOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int result = -1; // Default to -1 (not found)

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid;       // Found it! Store this index.
            low = mid + 1;      // But keep searching on the right side for an even later one.
        } else if (nums[mid] < target) {
            low = mid + 1;      // The number at mid is too small, so search the right side.
        } else {
            high = mid - 1;     // The number at mid is too big, so search the left side.
        }
    }
    return result;
}

// The main function where our program execution begins.
int main() {
    int size;
    int target;

    //Step 1: Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // If the user enters an invalid size, we can't proceed.
    if (size <= 0) {
        printf("Invalid array size. Please enter a positive number.\n");
        return 1; // Exit with an error
    }

    // Declare an array of the size the user specified.
    int nums[size];

    //Step 2: Get the elements of the array from the user
    printf("Enter the %d elements of the array (in sorted order):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    //Step 3: Get the target number to find from the user 
    printf("Enter the target number to find: ");
    scanf("%d", &target);

    //Step 4: Call our functions to find the indices
    int firstIndex = findFirstOccurrence(nums, size, target);
    int lastIndex = findLastOccurrence(nums, size, target);

    //Step 5: Print the final result
    printf("\nFinding target '%d' in the array...\n", target);
    printf("Result: %d, %d\n", firstIndex, lastIndex);

    if (firstIndex != -1) {
        printf("The first occurrence is at index %d.\n", firstIndex);
        printf("The last occurrence is at index %d.\n", lastIndex);
    } else {
        printf("The target number was not found in the array.\n");
    }

    return 0; 
}