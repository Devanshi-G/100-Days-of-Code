//To write a program to find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h> // Required for strlen()
#include <ctype.h>  // Required for islower() and tolower()

// Function to find the first repeating lowercase alphabet
char findFirstRepeatingLowercase(const char *str) {
    if (str == NULL) {
        return '\0'; // Return null character for invalid input
    }

    // A frequency array for lowercase English alphabets (a-z)
    // Initialize all counts to 0
    int char_counts[26] = {0}; // 0 for 'a', 1 for 'b', ..., 25 for 'z'

    for (int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];

        // Only process lowercase alphabets
        if (islower(current_char)) {
            // Calculate the index for the character
            // 'a' -> 0, 'b' -> 1, etc.
            int index = current_char - 'a';

            // Increment the count for this character
            char_counts[index]++;

            // If the count is greater than 1, it means we've seen this
            // character before, making it the first repeating one
            if (char_counts[index] > 1) {
                return current_char; // Found the first repeating character
            }
        }
    }

    // If the loop finishes, no repeating lowercase alphabet was found
    return '\0'; // Return null character to indicate no repeating char found
}

int main() {
    char myString[100];
    char repeatingChar;

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove the newline character if present (fgets includes it)
    myString[strcspn(myString, "\n")] = '\0';

    printf("Original string: \"%s\"\n", myString);

    repeatingChar = findFirstRepeatingLowercase(myString);

    if (repeatingChar != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", repeatingChar);
    } else {
        printf("No repeating lowercase alphabet found in the string.\n");
    }

    return 0;
}