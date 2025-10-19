//To write a program to reverse a string.

#include <stdio.h>
#include <string.h> // Required for strlen and strcspn

// Function to reverse a string in-place
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    // Loop from both ends of the string towards the center
    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters
        temp = str[i];     // Store the character at the beginning
        str[i] = str[j];   // Replace beginning with character from the end
        str[j] = temp;     // Replace end with the stored beginning character
    }
}

int main() {
    char inputString[100]; // Declare a character array to store the string

    printf("Enter a string: ");
    // Read the string from the user, including spaces
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the trailing newline character if present from fgets
    inputString[strcspn(inputString, "\n")] = 0;

    printf("Original string: %s\n", inputString);

    // Call the function to reverse the string
    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}