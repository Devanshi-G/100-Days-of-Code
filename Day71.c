#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h> // For strcspn

// Function to get user input and write to file
void writeUserInfoToFile() {
    FILE *filePointer;
    char name[100];
    int age;
    int scanResult; // To store the return value of scanf

    // Open the file in write mode ("w")
    // "w" creates the file if it doesn't exist, or overwrites it if it does
    filePointer = fopen("info.txt", "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        // Optionally, print the system error message for more details
        perror("fopen failed");
        exit(1); // Exit the program if file cannot be opened
    }

    // Get user's name
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Error reading name!\n");
        fclose(filePointer);
        exit(1);
    }

    // Remove the trailing newline character from name if present
    name[strcspn(name, "\n")] = 0;

    // Get user's age
    printf("Enter your age: ");
    scanResult = scanf("%d", &age); // Line 25 in your original code

    // Input validation for age
    if (scanResult != 1) { // If scanf didn't successfully read one integer
        printf("Invalid age input. Please enter a number.\n");
        fclose(filePointer);
        exit(1);
    }

    // Clear any remaining characters in the input buffer (like the newline after age)
    // This is good practice after scanf, especially if another input function follows.
    while (getchar() != '\n' && !feof(stdin));

    // Write name and age to the file
    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);

    // Close the file
    fclose(filePointer);

    printf("\nData successfully saved to info.txt!\n");
}

int main() {
    writeUserInfoToFile();
    return 0;
}