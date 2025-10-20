//To write a program to replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>

// Function to replace spaces with hyphens
void replaceSpacesWithHyphens(char *str) {
    if (str == NULL) { // Handle null string input
        return;
    }

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char myString[100]; // Declare a character array (string)

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin); // Read input from the user

    // Remove the newline character if fgets included it
    myString[strcspn(myString, "\n")] = '\0';

    printf("Original string: \"%s\"\n", myString);

    // Call the function to perform the replacement
    replaceSpacesWithHyphens(myString);

    printf("Modified string: \"%s\"\n", myString);

    return 0;
}