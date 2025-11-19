#include <stdio.h>

// Function 1: Takes user input and writes it to a file
void createFile() {
    FILE *fp;
    int n, i, num;

    // Open file in Write mode ("w")
    fp = fopen("numbers.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return;
    }

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers (separated by space or enter):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        // Write the number to the file followed by a space
        fprintf(fp, "%d ", num);
    }

    // Always close the file when done
    fclose(fp);
    printf("Numbers saved to 'numbers.txt' successfully.\n\n");
}

// Function 2: Reads from file, calculates Sum and Average
void calculateAndPrint() {
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average = 0.0;

    // Open file in Read mode ("r")
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error opening file. Make sure numbers.txt exists.\n");
        return;
    }

    printf("Reading from file...\n");

    // scan numbers from file until we reach the End Of File (EOF)
    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    // Close the file
    fclose(fp);

    // Calculate average (check if count > 0 to avoid division by zero)
    if (count > 0) {
        average = (float)sum / count; // Cast sum to float for decimal results
        printf("Total numbers read: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("The file was empty.\n");
    }
}

int main() {
    // Call the functions in order
    createFile();
    calculateAndPrint();

    return 0;
}