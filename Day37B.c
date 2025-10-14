//To write a program to find the transpose of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    // Get the number of rows and columns for the original matrix
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    // Declare the original matrix
    int matrix[rows][cols];

    // Declare the transpose matrix. Its dimensions will be (cols x rows).
    int transpose[cols][rows];

    // Read elements into the original matrix
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the transpose
    // The element at matrix[i][j] goes to transpose[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the original matrix (optional, for comparison)
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the Transpose matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; i++) { // Note: Outer loop now iterates 'cols' times
        for (int j = 0; j < rows; j++) { // Inner loop now iterates 'rows' times
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}