/* Write a program to take an array arr[] of integers as input, the task is to 
find the next greater element for each element of the array in order of their 
appearance in the array. Next greater element of an element in the array is the 
nearest element on the right which is greater than the current element. If there 
does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h> // This line includes the standard library for input/output functions like printf and scanf.

void findAndPrintNextGreater(int arr[], int size) {
    // If the array is empty, there is nothing to do.
    if (size <= 0) {
        printf("The array is empty.\n");
        return;
    }

    printf("\nThe Next Greater Elements are:\n");

    // The outer loop picks one element at a time from the array.
    for (int i = 0; i < size; i++) {
        // For each element, we assume its next greater element is -1 until we find one.
        int nextGreater = -1;

        // The inner loop searches for a greater element on the right side of arr[i].
        // It starts from the element right next to arr[i] (which is at index i + 1).
        for (int j = i + 1; j < size; j++) {
            // Check if an element to the right (arr[j]) is greater than our current element (arr[i]).
            if (arr[j] > arr[i]) {
                // If it is, we've found the next greater element.
                nextGreater = arr[j];
                // We can stop searching for this 'i', so we 'break' out of the inner loop.
                break;
            }
        }

        // After checking all elements to the right, we print the result.
        // To print in a "comma separated fashion", we add a comma and space
        // after each number, except for the very last one.
        if (i < size - 1) {
            printf("%d, ", nextGreater);
        } else {
            // This is for the last element, so no comma is needed.
            printf("%d", nextGreater);
        }
    }
    // Print a newline at the end for clean formatting in the terminal.
    printf("\n");
}

// The main function is the entry point of our program.
int main() {
    //Explain the program to the user
    printf("Next Greater Element Finder\n");
    printf("For each number you enter, this program will find the first number to its right that is larger.\n");
    printf("If no such number exists, it will be -1.\n\n");

    //Get the array size from the user
    int size;
    printf("How many numbers do you want in your array? ");
    scanf("%d", &size);

    //Get the elements from the user
    int arr[size]; // Create an integer array of the specified size.

    printf("Please enter the %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        // Ask for each number individually.
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    //Call the function to perform the calculation and print the results
    findAndPrintNextGreater(arr, size);

    return 0; 
}