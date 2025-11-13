#include <stdio.h>
#include <stdlib.h> // For exit()

// Function to read and print file contents
void readFile(const char *filename) {
    FILE *file;
    char buffer[256]; // Buffer to store each line, adjust size as needed

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file '%s'. Please make sure it exists.\n", filename);
        return; // Exit the function if file not found
    }

    printf("\nContents of '%s'\n", filename);

    // Read and print each line until the end of the file is reached
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    printf("End of file\n");

    // Close the file
    fclose(file);
}

int main() {
    char filename[100]; // Buffer to store the filename entered by the user

    printf("Enter the name of the file you want to read (e.g., info.txt): ");
    scanf("%s", filename); // Read filename from user input

    // Call the function to read and print the file
    readFile(filename);

    return 0;
}