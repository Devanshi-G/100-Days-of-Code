//To write a program to print the following pattern
#include <stdio.h>

int main() {
    int i, j;

    // Loop for each line (1 to 5)
    for (i = 1; i <= 5; i++) {
        // Print i stars in each line
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}