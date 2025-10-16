// To write a program to calculate the sum of the diagonal elements.

#include <stdio.h>

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

// USER-DEFINED FUNCTION: Find the sum of main diagonal elements
int sumMainDiagonal(int size, int matrix[size][size]) {
    int sum = 0; // Initialize sum to 0

    // The main diagonal elements are those where the row index (i) equals the column index (j)
    // i.e., matrix[0][0], matrix[1][1], matrix[2][2], ..., matrix[size-1][size-1]
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Add the diagonal element to the sum
    }

    return sum; // Return the calculated sum
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

    int matrix[size][size];

    printf("\n--- Enter the elements of your matrix ---\n");
    getMatrix(size, matrix);

    printf("\nYour entered matrix:\n");
    displayMatrix(size, matrix);

    // Call the function to calculate the sum of main diagonal elements
    int diagonalSum = sumMainDiagonal(size, matrix);

    printf("\nSum of the main diagonal elements: %d\n", diagonalSum);

    return 0;
}