//To write a program to check if a matrix is symmetric.

#include <stdio.h>
#include <stdbool.h> // For using bool data type

// Function to get matrix input from the user
// This function prompts the user for each element
void getMatrix(int size, int matrix[size][size]) {
    printf("Enter elements of the matrix (%d rows, %d columns):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]); // User input for each element
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

// Function to check if a matrix is symmetric
bool isSymmetric(int size, int matrix[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // A matrix is symmetric if matrix[i][j] == matrix[j][i] for all i and j
            if (matrix[i][j] != matrix[j][i]) {
                return false; // If any element doesn't match its transpose, it's not symmetric
            }
        }
    }
    return true; // If all elements match their transposes, it's symmetric
}

int main() {
    int size;

    printf("Enter the size of the square matrix (e.g., for a 3x3 matrix, enter 3): ");
    scanf("%d", &size); // User input for matrix size

    // Declare matrix with user-defined size (Variable Length Array - VLA)
    int matrix[size][size];

    printf("\n--- Now, enter the elements of your matrix ---\n");
    getMatrix(size, matrix); // Call function to get elements from user

    printf("\nYour entered matrix:\n");
    displayMatrix(size, matrix); // Display the user's matrix

    if (isSymmetric(size, matrix)) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }

    return 0;
}