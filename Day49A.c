//To write a program to print the initials of a name.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isupper, isspace

// Function to print the initials of a name
void printInitials(const char *name) {
    int i;
    int len = strlen(name);

    // Print the initial of the first name
    if (len > 0) {
        printf("%c", toupper(name[0])); // Convert to uppercase just in case
    }

    // Iterate through the rest of the string to find subsequent initials
    for (i = 1; i < len; i++) {
        // If the current character is a space and the next character is not a space
        // and is an alphabet, then it's the start of a new word/initial.
        if (isspace(name[i]) && i + 1 < len && !isspace(name[i+1])) {
            printf("%c", toupper(name[i + 1])); // Print the initial of the next word
        }
    }
    printf("\n"); // Newline after printing all initials
}

int main() {
    char fullName[100]; // Assuming maximum name length of 99 characters

    printf("Enter your full name: ");
    // Use fgets to read the whole line including spaces
    if (fgets(fullName, sizeof(fullName), stdin) != NULL) {
        // Remove the trailing newline character if present
        fullName[strcspn(fullName, "\n")] = 0;

        printf("Full Name: %s\n", fullName);
        printf("Initials: ");
        printInitials(fullName);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}