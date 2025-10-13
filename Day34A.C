// To write a program to insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int array[100]; // Declare an array with a maximum size of 100
    int size;       // Store the current size of the array
    int element;    // The element to be inserted
    int position;   // The position at which to insert the element

    // Get the initial size of the array from the user
    printf("Enter the current size of the array: ");
    scanf("%d", &size);

    // Get the elements of the array from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print the original array
    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Get the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Get the position at which to insert the element
    printf("Enter the position (1 to %d) where you want to insert the element: ", size + 1);
    scanf("%d", &position);

    // Validate the position
    if (position < 1 || position > size + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", size + 1);
    } else {
        // Shift elements to the right to make space for the new element
        // The loop starts from the end of the array (current size - 1)
        // and goes down to the insertion position (position - 1)
        for (int i = size - 1; i >= position - 1; i--) {
            array[i + 1] = array[i];
        }

        // Insert the new element at the specified position
        array[position - 1] = element;

        // Increment the size of the array
        size++;

        // Print the array after insertion
        printf("\nArray after insertion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}