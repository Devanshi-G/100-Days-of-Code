//To write a  program to check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h> // For strlen(), strcspn()
#include <ctype.h>  // For tolower()

#define ALPHABET_SIZE 26 // For 'a' through 'z'

// Function to clean a string (convert to lowercase and remove non-alphabetic chars)
// This is optional but makes anagram checking more robust (e.g., "Listen" and "Silent" are anagrams)
void cleanString(char *str) {
    if (str == NULL) {
        return;
    }

    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // Check if it's an alphabet
            str[j++] = tolower(str[i]); // Convert to lowercase and copy
        }
    }
    str[j] = '\0'; // Null-terminate the cleaned string
}

// Function to count character frequencies in a string
// Fills an array with counts for each lowercase alphabet
void countCharFrequencies(const char *str, int *freq_array) {
    // Initialize the frequency array to all zeros
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        freq_array[i] = 0;
    }

    if (str == NULL) {
        return;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) { // Only count lowercase alphabets
            freq_array[str[i] - 'a']++;
        }
    }
}

// Function to check if two strings are anagrams
// Assumes strings have already been cleaned (e.g., lowercase, no spaces/symbols)
int areAnagrams(const char *str1, const char *str2) {
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams
    }

    int freq1[ALPHABET_SIZE];
    int freq2[ALPHABET_SIZE];

    // Count frequencies for both strings
    countCharFrequencies(str1, freq1);
    countCharFrequencies(str2, freq2);

    // Compare the frequency arrays
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq1[i] != freq2[i]) {
            return 0; // Frequencies don't match, not anagrams
        }
    }

    return 1; // All frequencies match, they are anagrams
}

int main() {
    char string1[100];
    char string2[100];

    printf("Enter first string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; // Remove newline

    printf("\nOriginal strings:\n");
    printf("String 1: \"%s\"\n", string1);
    printf("String 2: \"%s\"\n", string2);

    // Create copies for cleaning, as cleanString modifies in place
    char cleaned_string1[100];
    char cleaned_string2[100];
    strcpy(cleaned_string1, string1);
    strcpy(cleaned_string2, string2);

    cleanString(cleaned_string1);
    cleanString(cleaned_string2);

    printf("\nCleaned strings (lowercase, no spaces/symbols):\n");
    printf("Cleaned 1: \"%s\"\n", cleaned_string1);
    printf("Cleaned 2: \"%s\"\n", cleaned_string2);


    if (areAnagrams(cleaned_string1, cleaned_string2)) {
        printf("\nRESULT: The strings ARE anagrams of each other.\n");
    } else {
        printf("\nRESULT: The strings are NOT anagrams of each other.\n");
    }

    return 0;
}