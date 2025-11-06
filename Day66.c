/*Write a program to take an integer array nums which contains only positive integers,
and an integer target as inputs. The goal is to find two distinct indices i and j in
the array such that nums[i] + nums[j] equals the target. Assume exactly one solution 
exists and return the indices in any order. Print the two indices separated by a space 
as output. If no solution exists, print "-1 -1".*/

#include <stdio.h>

int findTwoSum(int nums[], int size, int target, int indices[]) {
    // Use nested loops to check every pair of numbers.
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Check if the sum of the two numbers equals the target.
            if (nums[i] + nums[j] == target) {
                // If a pair is found, store their indices and return 1 (success).
                indices[0] = i;
                indices[1] = j;
                return 1;
            }
        }
    }
    // If no pair is found after checking all combinations, return 0 (failure).
    return 0;
}

int main() {
    int size;

    //User Input for the Array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter the positive integer elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    //User Input for the Target
    int target;
    printf("\nEnter the target sum: ");
    scanf("%d", &target);

    //Finding the Indices
    int resultIndices[2]; // An array to hold the indices of the two numbers.

    // Call the function to find the two numbers.
    if (findTwoSum(nums, size, target, resultIndices)) {
        // If the function returns 1, a solution was found.
        printf("\nThe two indices are: %d %d\n", resultIndices[0], resultIndices[1]);
    } else {
        // If the function returns 0, no solution was found.
        printf("\nNo solution found. Output: -1 -1\n");
    }

    return 0;
}