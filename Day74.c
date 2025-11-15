#include <stdio.h>
#include <stdlib.h> // For exit()

// Function to copy content from source to destination file
void copyFile(const char *sourceFile, const char *destinationFile) {
    FILE *sourcePtr, *destinationPtr;
    int character;

    // Open source file in read mode
    sourcePtr = fopen(sourceFile, "r");

    // Check if source file exists and can be opened
    if (sourcePtr == NULL) {
        printf("Error: Could not open source file %s\n", sourceFile);
        exit(EXIT_FAILURE); // Exit the program if file cannot be opened
    }

    // Open destination file in write mode
    destinationPtr = fopen(destinationFile, "w");

    // Check if destination file can be opened
    if (destinationPtr == NULL) {
        printf("Error: Could not open destination file %s\n", destinationFile);
        fclose(sourcePtr); // Close the source file before exiting
        exit(EXIT_FAILURE);
    }

    // Read character by character from source file and write to destination file
    while ((character = fgetc(sourcePtr)) != EOF) {
        fputc(character, destinationPtr);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, destinationFile);

    // Close both files
    fclose(sourcePtr);
    fclose(destinationPtr);
}

int main() {
    char sourceFileName[100]; // Array to store source file name
    char destinationFileName[100]; // Array to store destination file name

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    // Call the function to copy the file
    copyFile(sourceFileName, destinationFileName);

    return 0;
}