//To write a program to Count characters in a string without using built-in length functions.

#include <stdio.h>

// Function to count characters in a string
int stringLength(char str[]) {
    int count = 0;
    int i = 0;

    // Loop until the null terminator character ('\0') is found
    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

int main() {
    char text[100]; // Declare a character array (string) to store user input
                    // 100 is the maximum size, including the null terminator

    printf("Enter a string: ");
    // Read the string from the user.
    // %99[^\n] reads up to 99 characters until a newline is encountered.
    // This prevents buffer overflow for a 100-size array (leaving space for '\0').
    scanf("%99[^\n]", text);

    // Call the custom stringLength function
    int length = stringLength(text);

    printf("The string is: \"%s\"\n", text);
    printf("Number of characters in the string: %d\n", length);

    return 0;
}