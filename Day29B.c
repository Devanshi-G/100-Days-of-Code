//To write a program to find the minimum and maximum element in an array.
#include <stdio.h>

int main() {
    int numbers[100];
    int size;
    int min, max;

    // Read number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Validate size
    if (size < 1 || size > 100) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize min and max with the first element
    min = max = numbers[0];

    // Find min and max
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Print results
    printf("\nMinimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}