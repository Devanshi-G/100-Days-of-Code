/*Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
Print -1 if no such element exists. Note: Majority Element is not necessarily the element 
that is present most number of times.*/

#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    // A majority element must appear more than n/2 times.
    int majorityCondition = n / 2;

    // Pick each element one by one and check if it's the majority element.
    for (int i = 0; i < n; i++) {
        int count = 0;
        // Count how many times nums[i] appears in the array.
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }

        // If the count exceeds the condition, we've found our answer.
        if (count > majorityCondition) {
            return nums[i];
        }
    }

    // If the loop finishes without finding a majority element, return -1.
    return -1;
}

int main() {
    int n;

    // 1. Get the size of the array from the user.
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check for a non-positive size to avoid errors.
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit with an error code
    }

    int nums[n]; // Declare an array of the specified size.

    // 2. Get the elements of the array from the user.
    printf("Enter the %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // 3. Find and print the result.
    int result = findMajorityElement(nums, n);

    if (result != -1) {
        printf("The majority element is: %d\n", result);
    } else {
        printf("-1.\n");
    }

    return 0;
}