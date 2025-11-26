#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    // Array to store up to 100 students
    struct Student students[100];
    int n, i;
    int highest_index = 0; // We assume the first student has the highest initially

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Safety check: ensure at least 1 student
    if (n < 1) {
        printf("No students entered.\n");
        return 0;
    }

    // Loop to take input for each student
    for (i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i + 1);
        
        printf("Enter Name (first name only): ");
        scanf("%s", students[i].name);
        
        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Logic to find the highest marks
    // We start checking from the second student (index 1)
    for (i = 1; i < n; i++) {
        // If current student's marks are greater than our current highest
        if (students[i].marks > students[highest_index].marks) {
            // Update the index to point to this new top student
            highest_index = i;
        }
    }

    printf("Top Student found!\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Marks: %d\n", students[highest_index].marks);

    return 0;
}