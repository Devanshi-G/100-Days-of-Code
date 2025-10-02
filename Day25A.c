#include <stdio.h>

int main() {
    const int max_number = 5;

    // Loop to print each line, starting from max_number down to 1
    for (int start = max_number; start >= 1; start--) {
        // Loop to print numbers from 'start' to 'max_number'
        for (int current_number = start; current_number <= max_number; current_number++) {
            printf("%d ", current_number);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}