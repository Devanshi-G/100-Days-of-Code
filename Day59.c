/*Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

// Function to find the maximum sum of a subarray of size k
long long findMaxSubarraySum(int arr[], int n, int k) {
    // Basic validation: window size cannot be larger than the array
    if (k > n) {
        return -1; // Return error indicator
    }
    if (k <= 0) {
        return -1; // invalid window size
    }

    long long max_sum = 0;
    long long window_sum = 0;
    int i;

    // Step 1: Calculate sum of the first window (first k elements)
    for (i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    // Initialize max_sum with the first window's sum
    max_sum = window_sum;

    // Step 2: Slide the window across the array
    for (i = k; i < n; i++) {
        // ADD the next element entering the window
        // SUBTRACT the old element leaving the window
        window_sum = window_sum + arr[i] - arr[i - k];

        // Update max_sum if the new window sum is bigger
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k, i;

    // 1. Get the size of the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
         printf("Invalid array size.\n");
         return 1;
    }

    int arr[n]; // Declare array with user-defined size (Variable Length Array)

    // 2. Get the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the subarray size k
    printf("Enter the subarray size (k): ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input for k.\n");
        return 1;
    }

    // 4. Call the function to find the maximum sum
    // We use 'long long' for sums to prevent overflow if numbers are large
    long long maxSum = findMaxSubarraySum(arr, n, k);

    // 5. Print the result
    if (maxSum == -1 && (k > n || k <= 0)) {
        printf("Error: Subarray size 'k' must be between 1 and %d.\n", n);
    } else {
        printf("The maximum sum of a subarray of size %d is: %lld\n", k, maxSum);
    }

    return 0;
}