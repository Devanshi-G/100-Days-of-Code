/*Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater 
than or equal to x and print it. This element is called the ceil of x. 
If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/

#include <stdio.h>

/*
 * This function finds the index of the ceiling of 'x'.
 * The ceiling is the smallest element in the array that is >= x.
 *
 * Parameters:
 *   arr[]: The sorted array of numbers.
 *   size: The number of elements in the array.
 *   x: The number for which we are finding the ceiling.
 *
 * Returns:
 *   The index of the ceiling element, or -1 if it doesn't exist.
 */
int findCeil(int arr[], int size, int x) {
    int low = 0;              // Start of our search range (index 0)
    int high = size - 1;      // End of our search range (last index)
    int ans = -1;             // Our answer. We'll store the index here. Default to -1 (not found).

    // Keep searching as long as our search range is valid (low <= high)
    while (low <= high) {
        // Calculate the middle index safely
        int mid = low + (high - low) / 2;

        // Check if the middle element is a potential answer
        if (arr[mid] >= x) {
            // Yes, arr[mid] is >= x. This is a possible ceil.
            ans = mid;          // Store this index as our current best answer.
            high = mid - 1;     // Now, let's look to the left to see if we can find an even smaller
                                // element that is also >= x.
        } else { // arr[mid] < x
            // The middle element is too small.
            // The ceiling must be on the right side.
            low = mid + 1;      // Adjust our search range to the right half.
        }
    }

    // After the loop, 'ans' will hold the index of the first element that was >= x,
    // or it will still be -1 if no such element was ever found.
    return ans;
}


// The main function where our program starts.
int main() {
    int size;
    int x;

    //Step 1: Get array size from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    //invalid input.
    if (size <= 0) {
        printf("Error: Array size must be a positive number.\n");
        return 1; // Exit the program with an error code
    }

    // Declare an array of the size specified by the user.
    int arr[size];

    //Step 2: Get array elements from the user
    printf("Enter the %d elements in sorted order (ascending):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    //Step 3: Get the integer 'x' from the user
    printf("Enter the integer x to find its ceil: ");
    scanf("%d", &x);

    //Step 4: Call our function to do the work
    int ceilIndex = findCeil(arr, size, x);

    //Step 5: Print the result in a user-friendly way
    printf("\n--- Result ---\n");
    if (ceilIndex != -1) {
        // We found a ceiling!
        printf("The ceil of %d is the element %d at index %d.\n", x, arr[ceilIndex], ceilIndex);
        printf("Final Answer: %d\n", ceilIndex);
    } else {
        // No element was >= x
        printf("No ceil exists for %d in this array.\n", x);
        printf("Final Answer: -1\n");
    }

    return 0; 
}