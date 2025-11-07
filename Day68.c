/*Write a program to take an input array of size n. The array should contain 
all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    // The size of the complete series is 'size + 1' (since one number is missing).
    // For an array of size 'n-1', the complete series is from 0 to 'n'.
    int n = size + 1;

    // Calculate the expected sum of the series from 0 to n.
    // The formula for the sum of the first n natural numbers is n*(n+1)/2.
    int expected_sum = n * (n - 1) / 2;

    // Calculate the actual sum of the elements in the input array.
    int actual_sum = 0;
    for (int i = 0; i < size; i++) {
        actual_sum = actual_sum + arr[i];
    }

    // The difference between the expected sum and the actual sum is the missing number.
    return expected_sum - actual_sum;
}

int main() {
    int n;

    // Get the total size of the sequence (n) from the user.
    printf("Enter the total number of elements (n): ");
    scanf("%d", &n);

    // The array will hold n-1 elements because one is missing.
    int arr[n - 1];

    // Get the array elements from the user.
    printf("Enter %d integers (from 0 to %d, with one missing):\n", n - 1, n-1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // The actual size of the array is n-1.
    int array_size = n - 1;

    int missing_number = findMissingNumber(arr, array_size);
    printf("The missing number is: %d\n", missing_number);

    return 0;
}