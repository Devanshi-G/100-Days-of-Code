//To write a program to find the 1's complementof a bunary number and print it.
#include <stdio.h>
#include <string.h>

// Function to compute 1's complement
void onesComplement(char binary[]) {
    int i;
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            // Handle invalid input
            printf("Invalid binary digit '%c' encountered.\n", binary[i]);
            return;
        }
    }

    printf("1's Complement: %s\n", binary);
}

int main() {
    char binary[100];

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Call function to compute and print 1's complement
    onesComplement(binary);

    return 0;
}