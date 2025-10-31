/*Write a program to take an integer array arr and an integer k as inputs.
The task is to find the first negative integer in each subarray of size k 
moving from left to right. If no negative exists in a window, print "0" for 
that window. Print the results separated by spaces as output.
*/

#include <stdio.h>

void findFirstNegative(int arr[], int n, int k) {
    // This flag is used to track if a negative number has been found in the current window.
    int found_negative;

    // The outer loop iterates from the start of the array to the last possible starting point of a window of size k.
    for (int i = 0; i <= n - k; i++) {
        found_negative = 0;
        // The inner loop checks each element of the current window.
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found_negative = 1;
                break; // Exit the inner loop as soon as the first negative is found.
            }
        }

        // If the inner loop completes without finding a negative number, print 0.
        if (!found_negative) {
            printf("0 ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    // Taking user input for the size of the array.
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    // Taking user input for the elements of the array.
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    // Taking user input for the window size.
    printf("Enter the size of the window (k): ");
    scanf("%d", &k);

    printf("The first negative integer in each window is: ");
    // Calling the function to find and print the result.
    findFirstNegative(arr, n, k);

    return 0;
}