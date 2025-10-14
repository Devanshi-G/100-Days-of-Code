//To write a program to find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix
    int matrix[rows][cols];

    // Declare an array to store row sums. Its size will be 'rows'.
    int rowSums[rows];

    // Read elements into the matrix and calculate row sums
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        int currentRowSum = 0; // Initialize sum for the current row
        printf("For Row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            currentRowSum += matrix[i][j]; // Add to the current row's sum
        }
        rowSums[i] = currentRowSum; // Store the sum of the current row
    }

    // Print the matrix (optional)
    printf("\nThe matrix you entered is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum of each row
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d Sum: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}