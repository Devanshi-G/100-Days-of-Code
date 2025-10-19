//To write a program to check if a string is a palindrome.

#include <stdio.h>
#include <string.h> // For strlen, strcspn
#include <stdbool.h> // For bool type

// Function to check if a string is a palindrome
// Returns true if palindrome, false otherwise
bool isPalindrome(const char *str) {
    int length = strlen(str);
    int i, j;

    // Compare characters from both ends towards the center
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false; // Characters don't match, not a palindrome
        }
    }
    return true; // All characters matched, it's a palindrome
}

int main() {
    char inputString[100]; // Declare a character array to store the string

    printf("Enter a string: ");
    // Read the string from the user, including spaces
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the trailing newline character if present from fgets
    inputString[strcspn(inputString, "\n")] = 0;

    printf("You entered: %s\n", inputString);

    if (isPalindrome(inputString)) {
        printf("'%s' IS a palindrome.\n", inputString);
    } else {
        printf("'%s' IS NOT a palindrome.\n", inputString);
    }

    return 0;
}