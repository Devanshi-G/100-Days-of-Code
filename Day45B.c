//To write a program to toggle case each character in a string.

#include <stdio.h>
#include <string.h> // For strlen() and strcspn()
#include <ctype.h>  // For isupper(), islower(), toupper(), tolower()

// Function to toggle the case of characters in a string
void toggleCase(char *str) {
    if (str == NULL) {
        return;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]); // If uppercase, convert to lowercase
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]); // If lowercase, convert to uppercase
        }
        // If it's not a letter (e.g., digit, symbol, space), leave it unchanged
    }
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove the newline character if present
    myString[strcspn(myString, "\n")] = '\0';

    printf("Original string: %s\n", myString);

    toggleCase(myString); // Call the toggle case function

    printf("Toggled case string: %s\n", myString);

    return 0;
}