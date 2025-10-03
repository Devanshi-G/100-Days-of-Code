#include <stdio.h>

int main() {
    int i, j;
    int stars;

    for (i = 1; i <= 9; i++) {
        if (i <= 5) {
            // For lines 1 to 5, increase stars: 1, 3, 5, 7, 9
            stars = 2 * i - 1;
        } else {
            // For lines 6 to 9, decrease stars: 7, 5, 3, 1
            stars = 2 * (9 - i) + 1;
        }

        // Print stars for current line
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}