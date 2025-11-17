#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for easier comparison
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count vowels and consonants in a file
void countVowelsAndConsonants(FILE *inputFile, int *vowelCount, int *consonantCount) {
    int character; // Variable to store each character read from the file
    *vowelCount = 0; // Initialize vowel count to 0
    *consonantCount = 0; // Initialize consonant count to 0

    // Loop through the input file character by character until the end of the file (EOF) is reached
    while ((character = fgetc(inputFile)) != EOF) {
        // Check if the character is an alphabet (a-z or A-Z)
        if (isalpha(character)) {
            if (isVowel(character)) {
                (*vowelCount)++; // Increment vowel count if it's a vowel
            } else {
                (*consonantCount)++; // Increment consonant count if it's a consonant
            }
        }
        // If it's not an alphabet, we ignore it (digits, spaces, special characters, etc.)
    }
}

int main() {
    char inputFileName[100]; // Array to store the input file name entered by the user
    FILE *inputFilePointer;  // Pointer to the input file
    int vowels = 0;          // Variable to store the total vowel count
    int consonants = 0;      // Variable to store the total consonant count

    // Get input file name from the user
    printf("Enter the name of the input file (e.g., mytext.txt): ");
    scanf("%s", inputFileName);

    // Open the input file in read mode ("r")
    inputFilePointer = fopen(inputFileName, "r");

    // Check if the input file was opened successfully
    if (inputFilePointer == NULL) {
        printf("Error: Could not open the input file '%s'. Please make sure it exists.\n", inputFileName);
        return 1;
    }

    countVowelsAndConsonants(inputFilePointer, &vowels, &consonants);

    printf("\nAnalysis complete for file '%s':\n", inputFileName);
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    fclose(inputFilePointer);

    return 0;
}