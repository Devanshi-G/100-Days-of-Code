//To write a program to remove all vowels from a string.

#include <stdio.h>
#include <string.h> // Required for strlen() and strcspn()
#include <ctype.h>  // Required for tolower()

// Function to check if a character is a vowel (case-insensitive)
int isVowel(char c) {
    char lowerC = tolower(c); // Convert to lowercase for case-insensitive check
    return (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u');
}

// Function to remove all vowels from a string
void removeVowels(char *str) {
    if (str == NULL) {
        return;
    }

    int i, j;
    int len = strlen(str);
    char temp[len + 1]; // Temporary buffer to build the new string
    j = 0; // Index for the temporary string

    for (i = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            temp[j++] = str[i]; // If not a vowel, copy to temp
        }
    }
    temp[j] = '\0'; // Null-terminate the temporary string

    strcpy(str, temp); // Copy the modified string back to the original
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove the newline character if present (fgets includes it)
    myString[strcspn(myString, "\n")] = '\0';

    printf("Original string: %s\n", myString);

    removeVowels(myString); // Call the function to remove vowels

    printf("String after removing vowels: %s\n", myString);

    return 0;
}