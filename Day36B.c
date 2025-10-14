//To write a program to find the sum of all elements of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array (matrix)
    int matrix[rows][cols];
    int sum = 0; // Initialize sum to 0

    // Read elements into the matrix and add them to the sum
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add the current element to the sum
        }
    }

    // Print the matrix (optional, but good for verification)
    printf("\nThe matrix you entered is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the total sum
    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}