//To write a program to read and print elements of a one dimensional array.
#include <stdio.h>

int main() {
    int numbers[100];   // Array to store up to 100 elements
    int size;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Validate the size
    if (size < 1 || size > 100) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Read elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Print the elements
    printf("\nYou entered the following elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}