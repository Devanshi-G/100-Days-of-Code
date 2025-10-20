//To write a program to count frequency of a given character in a string.

#include <stdio.h>
#include <string.h> // Required for strlen()

// Function to count the frequency of a character in a string
int countCharacterFrequency(const char *str, char targetChar) {
    int count = 0;
    if (str == NULL) { // Handle null string input
        return 0;
    }

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == targetChar) {
            count++;
        }
    }
    return count;
}

int main() {
    char myString[100];
    char searchChar;
    int frequency;

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin); // Read the string

    // Remove the newline character if fgets included it
    myString[strcspn(myString, "\n")] = '\0';

    printf("Enter the character to find its frequency: ");
    scanf(" %c", &searchChar); // Read a single character (note the space before %c)

    // Call the function to get the frequency
    frequency = countCharacterFrequency(myString, searchChar);

    printf("The character '%c' appears %d times in the string.\n", searchChar, frequency);

    return 0;
}