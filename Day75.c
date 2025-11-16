#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h> // For strlen()

// Function to get a filename from the user
void getFilename(char *filename, int maxLength) {
    printf("Enter the name of the file (e.g., my_file.txt): ");
    fgets(filename, maxLength, stdin);
    filename[strcspn(filename, "\n")] = 0; // Remove trailing newline character
}

// Function to get a line of text from the user
void getNewLine(char *line, int maxLength) {
    printf("Enter the new line of text to append: ");
    fgets(line, maxLength, stdin);
    // fgets already includes the newline, we might want to keep it for file content
}

// Function to append a line of text to a file
void appendToFile(const char *filename, const char *textToAppend) {
    FILE *filePointer;

    // Open the file in append mode ("a")
    // "a" mode creates the file if it doesn't exist
    filePointer = fopen(filename, "a");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        exit(EXIT_FAILURE); // Exit the program if file opening fails
    }

    // Write the text to the file
    fprintf(filePointer, "%s", textToAppend);

    // Close the file
    fclose(filePointer);

    printf("Text successfully appended to '%s'.\n", filename);
}

int main() {
    char filename[100]; // Buffer to store the filename
    char newLine[200];  // Buffer to store the new line of text

    printf("Welcome to the File Appender!\n");

    // Get filename from the user
    getFilename(filename, sizeof(filename));

    // Get the new line of text from the user
    getNewLine(newLine, sizeof(newLine));

    // Append the text to the file
    appendToFile(filename, newLine);

    return 0;
}