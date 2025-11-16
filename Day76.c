#include <stdio.h>   
#include <stdlib.h>  
#include <string.h>  

// Function to get a filename from the user
void getFilename(char *filenameBuffer, int bufferSize) {
    printf("Enter the name of the file you want to read (e.g., document.txt): ");
    fgets(filenameBuffer, bufferSize, stdin);
    // Remove the trailing newline character that fgets reads
    filenameBuffer[strcspn(filenameBuffer, "\n")] = 0;
}

// Function to check if a file exists and display its content
void readFileContent(const char *filename) {
    FILE *filePointer; // Declare a file pointer

    // Attempt to open the file in read mode ("r")
    // "r" mode means "read". If the file doesn't exist, fopen will return NULL.
    filePointer = fopen(filename, "r");

    // Check if the file pointer is NULL, indicating an error (file not found/cannot be opened)
    if (filePointer == NULL) {
        printf("Error: The file '%s' could not be opened or does not exist.\n", filename);
        // We don't exit here, just inform the user and let the main function decide to continue or end.
        return; // Exit this function
    }

    printf("\nContent of '%s'\n", filename);

    // Read and print the content character by character until the end of the file (EOF)
    int character; // Use int to store character to correctly handle EOF
    while ((character = fgetc(filePointer)) != EOF) {
        putchar(character); // Print the character to the console
    }

    printf("\nEnd of file content\n");

    // Close the file when done
    fclose(filePointer);
}

int main() {
    char filename[100]; // Buffer to store the filename entered by the user

    printf("Welcome to the File Reader!\n");

    // Get the filename from the user
    getFilename(filename, sizeof(filename));

    // Try to read and display the content of the file
    readFileContent(filename);

    printf("\nProgram finished.\n");

    return 0;
}