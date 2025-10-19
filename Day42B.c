//To write a program to convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
#include <string.h> // For strcspn

// Function to convert a string to uppercase (modifies original string)
void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) { // Loop until null terminator
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert by subtracting 32 (ASCII diff)
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string to convert to uppercase: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0; // Remove newline

    printf("Original: %s\n", inputString);
    toUppercase(inputString); // Call the conversion function
    printf("Uppercase: %s\n", inputString);

    return 0;
}