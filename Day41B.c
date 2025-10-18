//To wirte a program to print each character of a string on a new line.

#include <stdio.h>

// Function to print each character of a string on a new line
void printCharsOnNewLine(char str[]) {
    int i = 0;
    // Loop until the null terminator character ('\0') is found
    while (str[i] != '\0') {
        printf("%c\n", str[i]); // Print the character followed by a newline
        i++;                    // Move to the next character
    }
}

int main() {
    char text[100]; // Declare a character array (string) to store user input

    printf("Enter a string: ");
    // Safely read the string from the user, up to 99 characters plus null terminator
    scanf("%99[^\n]", text);

    printf("\nCharacters of the string on new lines:\n");
    // Call the function to print each character on a new line
    printCharsOnNewLine(text);

    return 0;
}