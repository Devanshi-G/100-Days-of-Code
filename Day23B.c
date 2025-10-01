//To write a program to print the given pattern
#include <stdio.h>

int main() {
    // Loop for 5 lines
    for (int i = 0; i < 5; i++) {
        // Loop for 5 stars in each line
        for (int j = 0; j < 5; j++) {
            printf("* ");
        }
        // Move to the next line after printing 5 stars
        printf("\n");
    }

    return 0;
}