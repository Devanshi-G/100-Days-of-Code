/*Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving 
from left to right. Print the maximum elements for each window separated by spaces as output.*/

#include <stdio.h>

// Function to find and print the maximum for each subarray of size k
void printMaxOfSubarrays(int arr[], int n, int k) {
    // Basic validation: k must be a valid size
    if (k > n || k <= 0) {
        printf("Invalid input: 'k' must be between 1 and the array size.\n");
        return;
    }

    int i, j;
    int max_in_window;

    // The outer loop determines the starting point of each window.
    // It runs from the beginning of the array up to the point where a full
    // window of size 'k' can be formed.
    for (i = 0; i <= n - k; i++) {
        
        // --- For each window, find the maximum element ---

        // 1. Assume the first element of the current window is the maximum.
        max_in_window = arr[i];

        // 2. The inner loop checks the rest of the elements in the current window.
        // It starts from the second element of the window (index i + 1).
        for (j = 1; j < k; j++) {
            
            // 3. If we find a larger element in the window...
            if (arr[i + j] > max_in_window) {
                // ...update our maximum for this window.
                max_in_window = arr[i + j];
            }
        }
        
        // 4. After checking the whole window, print the maximum found.
        printf("%d ", max_in_window);
    }
    
    // Print a newline at the end for clean output
    printf("\n");
}

int main() {
    int n, k, i;

    // Get the size of the main array from the user
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit with an error
    }

    // Declare an array of the size provided by the user
    int arr[n];

    // Get the array elements from the user
    printf("Enter %d elements separated by spaces:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the size of the subarray (window)
    printf("Enter the subarray size (k): ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input for k.\n");
        return 1; // Exit with an error
    }

    // Call the function to perform the main task
    printf("\nMaximum elements in each subarray of size %d are:\n", k);
    printMaxOfSubarrays(arr, n, k);

    return 0;
}