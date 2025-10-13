//To write a program to find the second largest number in an array.

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 1) { // Simplified check: need at least 2 distinct elements to have a 'second largest'
        printf("Please enter at least two elements.\n");
        return 1;} // Indicate an error 

    int arr[n]; 
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and secondLargest
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) { // Use arr[i] < largest for strict distinctness
            secondLargest = arr[i];
        }
    }

    printf("\nYour array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (secondLargest == INT_MIN) {
        printf("Could not find a distinct second largest element (all elements might be the same).\n");
    } else {
        printf("Largest element: %d\n", largest);
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}