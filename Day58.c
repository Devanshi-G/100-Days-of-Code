/*Write a Program to take an integer array nums. Print an array answer such that 
answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// Function to get array elements from the user
void getInput(int arr[], int n) {
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Function to calculate product except self
void productExceptSelf(int nums[], int n, int answer[]) {
    if (n == 0) {
        return; // Handle empty array case
    }

    // Calculate left products
    // left_products[i] will store the product of all elements to the left of nums[i]
    // For index 0, there are no elements to the left, so product is 1.
    int* left_products = (int*)malloc(n * sizeof(int));
    if (left_products == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    left_products[0] = 1;
    for (int i = 1; i < n; i++) {
        left_products[i] = left_products[i - 1] * nums[i - 1];
    }

    // Calculate right products
    // right_products[i] will store the product of all elements to the right of nums[i]
    // For the last index (n-1), there are no elements to the right, so product is 1.
    int* right_products = (int*)malloc(n * sizeof(int));
    if (right_products == NULL) {
        printf("Memory allocation failed!\n");
        free(left_products); // Clean up previously allocated memory
        exit(1);
    }

    right_products[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right_products[i] = right_products[i + 1] * nums[i + 1];
    }

    // Step 3: Calculate the final answer
    // answer[i] = left_products[i] * right_products[i]
    for (int i = 0; i < n; i++) {
        answer[i] = left_products[i] * right_products[i];
    }

    // Free the dynamically allocated memory
    free(left_products);
    free(right_products);
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1; // Indicate an error
    }

    // Declare arrays
    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int* answer = (int*)malloc(n * sizeof(int));
    if (answer == NULL) {
        printf("Memory allocation failed!\n");
        free(nums); // Clean up previously allocated memory
        return 1;
    }

    // Get input for the nums array
    getInput(nums, n);

    printf("\nOriginal array: ");
    printArray(nums, n);

    // Calculate the product except self
    productExceptSelf(nums, n, answer);

    printf("Answer array: ");
    printArray(answer, n);

    // Free the dynamically allocated memory
    free(nums);
    free(answer);

    return 0;
}