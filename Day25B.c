#include <stdio.h>

int main() {
    const int total_rows = 5;

    // Loop through each row
    for (int current_row = 1; current_row <= total_rows; current_row++) {
        // Print leading spaces for right alignment
        for (int space = 1; space <= total_rows - current_row; space++) {
            printf(" ");
        }

        // Print stars in the current row
        for (int star = 1; star <= current_row; star++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}