#include <stdio.h> 
#include <ctype.h> 

// Function to convert lowercase letters to uppercase in a given file
void convertToUppercase(FILE *inputFile, FILE *outputFile) {
    int character; // Variable to store each character read from the file

    // Loop through the input file character by character until the end of the file (EOF) is reached
    while ((character = fgetc(inputFile)) != EOF) {
        // Convert the character to uppercase. If it's already uppercase or not a letter, it remains unchanged.
        character = toupper(character);
        // Write the converted character to the output file
        fputc(character, outputFile);
    }
}

int main() {
    char inputFileName[100];  // Array to store the input file name entered by the user
    char outputFileName[100]; // Array to store the output file name entered by the user
    FILE *inputFilePointer;   // Pointer to the input file
    FILE *outputFilePointer;  // Pointer to the output file

    // Get input file name from the user
    printf("Enter the name of the input file (e.g., input.txt): ");
    scanf("%s", inputFileName);

    // Get output file name from the user
    printf("Enter the name of the output file (e.g., output.txt): ");
    scanf("%s", outputFileName);

    // Open the input file in read mode ("r")
    inputFilePointer = fopen(inputFileName, "r");

    // Check if the input file was opened successfully
    if (inputFilePointer == NULL) {
        printf("Error: Could not open the input file '%s'. Please make sure it exists.\n", inputFileName);
        return 1; // Indicate an error
    }

    outputFilePointer = fopen(outputFileName, "w");

    // Check if the output file was opened successfully
    if (outputFilePointer == NULL) {
        printf("Error: Could not create or open the output file '%s'.\n", outputFileName);
        fclose(inputFilePointer); // Close the input file if output file can't be opened
        return 1; // Indicate an error
    }

    
    convertToUppercase(inputFilePointer, outputFilePointer);

    printf("File conversion complete! All lowercase letters in '%s' have been converted to uppercase and saved to '%s'.\n", inputFileName, outputFileName);

    fclose(inputFilePointer);
    fclose(outputFilePointer);

    return 0;
}