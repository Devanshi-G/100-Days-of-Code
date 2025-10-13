//To write a program to delete an element from the array.

#include <stdio.h>

int main() {
    int arr[100]; // Declare an array with a maximum size of 100
    int size, i, position;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Get the elements of the array from the user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position to delete from the user
    printf("Enter the position of the element to delete (1 to %d): ", size);
    scanf("%d", &position);

    // Validate the position
    if (position < 1 || position > size) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", size);
    } else {
        // Shift elements to the left to overwrite the element at the given position
        for (i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array
        size--;

        // Print the array after deletion
        printf("Array after deleting the element:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}