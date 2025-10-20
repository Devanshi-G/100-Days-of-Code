//To write a program to count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isdigit(), isspace(), isalnum()

// Function to count spaces, digits, and special characters
void countCharacters(const char *str, int *spaces, int *digits, int *isSpecial) {
    *spaces = 0;
    *digits = 0;
    *isSpecial = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            (*spaces)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else if (!isalnum(str[i])) { // If it's not alphanumeric, it's a special character
            (*isSpecial)++;
        }
    }
}

int main() {
    char str[100];
    int spaces, digits, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces

    // Remove the newline character if present (fgets includes it)
    str[strcspn(str, "\n")] = '\0';

    countCharacters(str, &spaces, &digits, &special);

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}