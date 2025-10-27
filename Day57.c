/* Write a program to take an array arr[] of integers as input, the task is to find the 
previous greater element for each element of the array in order of their appearance in 
the array. Previous greater element of an element in the array is the nearest element on
the left which is greater than the current element. If there does not exist next greater 
of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h>

// Function to find and print previous greater elements
void findPreviousGreater(int arr[], int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        int prevGreater = -1;
        
        // Check all elements to the left of arr[i]
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Stop at the nearest greater element
            }
        }
        
        // Print the result for the current element
        printf("%d", prevGreater);
        
        // Print comma except after the last element
        if (i != n - 1)
            printf(", ");
    }
}

int main() {
    int n, i;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the result
    printf("Previous Greater Elements: ");
    findPreviousGreater(arr, n);
    
    return 0;
}
