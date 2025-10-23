//To write a program to print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

// Function to print all substrings of a given string
void printAllSubstrings(const char *str) {
    int n = strlen(str);
    printf("All substrings of \"%s\" are:\n", str);

    // Outer loop picks starting character
    for (int i = 0; i < n; i++) {
        // Inner loop picks ending character
        for (int j = i; j < n; j++) {
            // Innermost loop prints characters from current starting to current ending
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Newline after each substring
        }
    }
}

int main() {
    char myString[100]; // Declare a character array to store the input string

    printf("Enter a string: ");
    scanf("%s", myString); // Read the string from the user

    printAllSubstrings(myString); // Call the function to print substrings

    return 0;
}