//To write a program to add two matrices.

#include <stdio.h>

// Function to get matrix input from the user
void getMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%d rows, %d columns):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare matrices with dynamic sizes
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sumMatrix[rows][cols];

    printf("\nFor Matrix 1:\n");
    getMatrix(rows, cols, matrix1);

    printf("\nFor Matrix 2:\n");
    getMatrix(rows, cols, matrix2);

    printf("\nMatrix 1:\n");
    displayMatrix(rows, cols, matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(rows, cols, matrix2);

    addMatrices(rows, cols, matrix1, matrix2, sumMatrix);

    printf("\nSum of the matrices:\n");
    displayMatrix(rows, cols, sumMatrix);

    return 0;
}