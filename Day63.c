#include <stdio.h> 

// Function to swap two numbers (helper for sorting)
void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;    
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one, move the boundary of the unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the remaining unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted subarray
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to find the kth smallest element
// It takes the array, its size, and k (1-indexed) as input
int findKthSmallest(int arr[], int n, int k) {
    selectionSort(arr, n);
    return arr[k - 1];
}

int main() {
    int n; // Variable to store the number of elements in the array
    int k; // Variable to store which smallest element we want to find

    printf("Welcome! Let's find the Kth smallest number in an array.\n");

    // Get the size of the array from the user
    printf("How many numbers will be in your array? ");
    scanf("%d", &n);

    // Basic validation for array size
    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    printf("\nNow, enter the %d numbers for your array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get the value of k from the user
    printf("\nWhich smallest number would you like to find? (e.g., enter 1 for the 1st smallest, 2 for the 2nd smallest, etc.): ");
    scanf("%d", &k);

    // Basic validation for k
    if (k <= 0 || k > n) {
        printf("Invalid value for k. It must be between 1 and %d.\n", n);
        return 1; // Exit with an error code
    }

    // Call our function to find the kth smallest element
    int result = findKthSmallest(arr, n, k);

    printf("The %dth smallest number in your array is: %d\n", k, result); 

    return 0;
}
