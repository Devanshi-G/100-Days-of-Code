#include <stdio.h>
#include <limits.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxSubArraySum(int arr[], int n) {
    // Initialize max_so_far and current_max with the first element of the array.
    // Using INT_MIN is also a safe approach, especially for an empty array,
    // but the problem constraints usually assume a non-empty array.
    int max_so_far = arr[0];
    int current_max = arr[0];

    // Iterate through the array starting from the second element.
    for (int i = 1; i < n; i++) {
        // The core of Kadane's algorithm. For each element, we have two choices:
        // 1. Start a new subarray from the current element.
        // 2. Extend the previous subarray by adding the current element.
        // We choose the one which gives a larger sum.
        current_max = max(arr[i], current_max + arr[i]);

        // Update the overall maximum sum found so far.
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check for invalid array size
    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    // Get the array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the maximum subarray sum
    int max_sum = maxSubArraySum(arr, n);

    printf("The maximum sum of a contiguous subarray is: %d\n", max_sum);

    return 0;
}