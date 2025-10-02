#include <stdio.h>

int main() {
    const int max_number = 5;

    // Loop through each row, starting from max_number down to 1
    for (int start_number = max_number; start_number >= 1; start_number--) {
        // Print spaces for right alignment
        for (int space = 1; space < start_number; space++) {
            printf("  ");  // Two spaces for alignment with numbers
        }

        // Print numbers from start_number to max_number
        for (int num = start_number; num <= max_number; num++) {
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}