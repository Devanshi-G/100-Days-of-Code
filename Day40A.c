//To write a program to perform the diagonal transvers of a matrix.

#include <stdio.h>

// Function to take matrix input from the user
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print the matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("\nEntered Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform and print diagonal traversal
void diagonalTraversal(int rows, int cols, int matrix[rows][cols]) {
    printf("\nDiagonal Traversal:\n");

    // Traverse upwards diagonals
    for (int k = 0; k < rows + cols - 1; k++) {
        // For elements in the first half of diagonals (starting from row 0)
        if (k < cols) {
            for (int i = 0; i <= k && i < rows; i++) {
                int j = k - i;
                if (j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        // For elements in the second half of diagonals (starting from last row)
        else {
            for (int i = k - cols + 1; i < rows; i++) {
                int j = k - i;
                if (j >= 0) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array (matrix)
    int matrix[rows][cols];

    // Take matrix input
    inputMatrix(rows, cols, matrix);

    // Print the matrix
    printMatrix(rows, cols, matrix);

    // Perform and print diagonal traversal
    diagonalTraversal(rows, cols, matrix);

    return 0;
}