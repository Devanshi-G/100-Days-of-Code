//To write a program to multiply two matrices 

#include <stdio.h>

// Function to take matrix input from the user
void inputMatrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("Enter elements of Matrix %c (%d rows x %d cols):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("\nMatrix %c:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int r1, int c1, int matrix1[r1][c1],
                      int r2, int c2, int matrix2[r2][c2],
                      int result[r1][c2]) {
    // Initialize result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < r1; i++) { // rows of matrix1
        for (int j = 0; j < c2; j++) { // columns of matrix2
            for (int k = 0; k < c1; k++) { // columns of matrix1 / rows of matrix2
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Get dimensions of Matrix A
    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &r1);
    printf("Enter number of columns for Matrix A: ");
    scanf("%d", &c1);

    // Get dimensions of Matrix B
    printf("\nEnter number of rows for Matrix B: ");
    scanf("%d", &r2);
    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\nError: Matrix multiplication is not possible.\n");
        printf("Number of columns of Matrix A must be equal to number of rows of Matrix B.\n");
        return 1; // Indicate an error
    }

    // Declare matrices
    int matrixA[r1][c1];
    int matrixB[r2][c2];
    int resultMatrix[r1][c2]; // Result matrix will have r1 rows and c2 columns

    // Take input for Matrix A
    inputMatrix(r1, c1, matrixA, 'A');

    // Take input for Matrix B
    inputMatrix(r2, c2, matrixB, 'B');

    // Print input matrices
    printMatrix(r1, c1, matrixA, 'A');
    printMatrix(r2, c2, matrixB, 'B');

    // Perform multiplication
    multiplyMatrices(r1, c1, matrixA, r2, c2, matrixB, resultMatrix);

    // Print the result matrix
    printMatrix(r1, c2, resultMatrix, 'C'); // 'C' for result matrix

    return 0; 
}