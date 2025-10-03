#include <stdio.h>

int main() {
    int i, j;
    int stars, spaces;

    for (i = 1; i <= 7; i++) {
        if (i <= 4) {
            // Lines 1 to 4: 1, 3, 5, 7 stars
            stars = 2 * i - 1;
        } else {
            // Lines 5 to 7: 5, 3, 1 stars
            stars = 2 * (7 - i) + 1;
        }

        // Calculate spaces to center-align the stars
        spaces = (7 - stars) / 2;

        // Print leading spaces
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}