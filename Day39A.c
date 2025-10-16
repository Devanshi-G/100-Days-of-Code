// To write a program to check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h> // For using bool data type

// Function to get matrix input from the user
void getMatrix(int size, int matrix[size][size]) {
    printf("Enter elements of the matrix (%d rows, %d columns):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int size, int matrix[size][size]) {
    printf("Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// USER-DEFINED FUNCTION: Check if diagonal elements are distinct
bool areDiagonalElementsDistinct(int size, int matrix[size][size]) {
    // We only need to check the elements on the main diagonal,
    // which are matrix[i][i] for i from 0 to size-1.

    // A simple way to check for distinctness is to compare each diagonal element
    // with every other diagonal element.

    for (int i = 0; i < size; i++) {
        // Compare matrix[i][i] with matrix[j][j] for all j > i
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                // Found a duplicate on the diagonal
                return false;
            }
        }
    }
    // If no duplicates were found after all comparisons
    return true;
}

int main() {
    int size;

    printf("Enter the size of the square matrix (e.g., for a 3x3 matrix, enter 3): ");
    scanf("%d", &size);

    // Basic check for valid size
    if (size <= 0) {
        printf("Matrix size must be a positive integer.\n");
        return 1; // Indicate an error
    }
    if (size == 1) { // A 1x1 matrix always has distinct diagonal elements (only one element)
        printf("A 1x1 matrix always has distinct diagonal elements.\n");
        // We still proceed to get and display it for consistency, but the check is trivial.
    }


    int matrix[size][size];

    printf("\n--- Enter the elements of your matrix ---\n");
    getMatrix(size, matrix);

    printf("\nYour entered matrix:\n");
    displayMatrix(size, matrix);

    printf("\nChecking diagonal elements...\n");
    if (areDiagonalElementsDistinct(size, matrix)) {
        printf("The diagonal elements ARE distinct.\n");
    } else {
        printf("The diagonal elements are NOT distinct.\n");
    }

    return 0;
}