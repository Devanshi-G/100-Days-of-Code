/*Write a program to take a string s as input. The task is to
find the length of the longest substring without repeating characters.
Print the length as output.*/

#include <stdio.h>
#include <string.h>

// Function to find the length of the longest substring without repeating characters
int longestSubstringLength(char *str) {
    int n = strlen(str);
    int maxLength = 0;
    int start = 0;
    int charIndex[256];

    // Initialize the character index array with -1
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int end = 0; end < n; end++) {
        // If the character has been seen before and is within the current window
        if (charIndex[str[end]] >= start) {
            // Move the start of the window to the position after the last occurrence
            start = charIndex[str[end]] + 1;
        }

        // Update the last seen index of the current character
        charIndex[str[end]] = end;

        // Calculate the length of the current window and update the max length
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }
    return maxLength;
}

int main() {
    char inputString[1000];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%[^\n]s", inputString);

    // Call the function to calculate the length
    int length = longestSubstringLength(inputString);

    // Print the final output
    printf("The length of the longest substring without repeating characters is: %d\n", length);

    return 0;
}