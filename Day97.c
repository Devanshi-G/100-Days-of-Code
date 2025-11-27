#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp_write, emp_read;

    // Open file in "Write Binary" mode
    fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Take user input
    printf("Enter Employee Details\n");
    printf("Enter ID: ");
    scanf("%d", &emp_write.id);
    
    printf("Enter Name: ");
    scanf("%s", emp_write.name); // stops at whitespace
    
    printf("Enter Salary: ");
    scanf("%f", &emp_write.salary);

    // Write the structure to file
    // Arguments: pointer to data, size of one element, number of elements, file pointer
    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    
    // Close the file to save changes
    fclose(fp); 
    printf("\nData written to file successfully.\n");


    // Open file in "Read Binary" mode
    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read data from file into a different variable (emp_read)
    fread(&emp_read, sizeof(struct Employee), 1, fp);

    // Display the data
    printf("\nData Read from File\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    fclose(fp);

    return 0;
}