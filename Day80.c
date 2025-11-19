#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student details
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to write data to the file
void writeRecords() {
    FILE *fptr;
    int i, n;
    struct Student s;

    // Open file in "w" (write) mode
    fptr = fopen("students.txt", "w");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("How many students do you want to add? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Enter Name (no spaces): ");
        scanf("%s", s.name); 
        
        printf("Enter Roll Number: ");
        scanf("%d", &s.rollNumber);
        
        printf("Enter Marks: ");
        scanf("%f", &s.marks);

        // Write the data to the file
        // Format: Name Roll Marks (separated by spaces)
        fprintf(fptr, "%s %d %.2f\n", s.name, s.rollNumber, s.marks);
    }

    fclose(fptr); // Always close the file
    printf("\nData written successfully!\n");
}

// Function to read data from the file
void readRecords() {
    FILE *fptr;
    struct Student s;

    // Open file in "r" (read) mode
    fptr = fopen("students.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file! Did you write data first?\n");
        return;
    }

    printf("READING RECORDS FROM FILE\n");
    printf("Name\t\tRoll No\t\tMarks\n");

    // Loop reads until End Of File (EOF)
    // fscanf returns the number of items read. If it doesn't equal 3, we stop.
    while (fscanf(fptr, "%s %d %f", s.name, &s.rollNumber, &s.marks) != EOF) {
        printf("%s\t\t%d\t\t%.2f\n", s.name, s.rollNumber, s.marks);
    }

    fclose(fptr); //close the file
}

int main() {
    // Step 1: Write data
    writeRecords();

    // Step 2: Read and display data
    readRecords();

    return 0;
}