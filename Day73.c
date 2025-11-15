#include <stdio.h>
#include <stdlib.h> // For exit()
#include <ctype.h>  // For isspace()

// Function to count characters, words, and lines in a file
void analyzeFile(const char *filename) {
    FILE *file;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0; // Flag to track if we are currently inside a word
    int c;          // To store each character read from the file

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file '%s'. Please make sure it exists.\n", filename);
        return; // Exit the function if file not found
    }

    // Read character by character until the end of the file
    while ((c = fgetc(file)) != EOF) {
        characters++; // Increment character count for every character

        // Check for new line
        if (c == '\n') {
            lines++;
        }

        // Check for words
        if (isspace(c)) {
            inWord = 0; // If it's a space, we are no longer in a word
        } else if (inWord == 0) {
            // If it's not a space and we were not in a word, it's the start of a new word
            words++;
            inWord = 1;
        }
    }

    // If the file is not empty and the last character was not a newline,
    // we need to count the last line.
    // Also, if the file is not empty and ends with a non-whitespace character,
    // and there were characters counted, ensure the last line is counted.
    if (characters > 0 && c != '\n') {
        lines++;
    }


    printf("\nAnalysis of '%s'\n", filename);
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    // Close the file
    fclose(file);
}

int main() {
    char filename[100]; // Buffer to store the filename entered by the user

    printf("Enter the name of the file you want to analyze (e.g., info.txt): ");
    scanf("%s", filename); // Read filename from user input

    // Call the function to analyze the file
    analyzeFile(filename);

    return 0;
}