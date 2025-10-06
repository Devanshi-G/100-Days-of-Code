//To write a program to find the sum of array elements.
#include <stdio.h>

int main() {
    int numbers[100];   // Array to hold up to 100 integers
    int size, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Validate size
    if (size < 1 || size > 100) {
        printf("Invalid size. Please enter a value between 1 and 100.\n");
        return 1;
    }

    // Read elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // Add each element to the sum
    }

    // Print the total sum
    printf("\nSum of the array elements = %d\n", sum);

    return 0;
}