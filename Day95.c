#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that takes an array of students and returns the 'topper' structure
struct Student getTopper(struct Student s[], int n) {
    struct Student bestStudent = s[0]; // Assuming the first student is the topper initially

    for (int i = 1; i < n; i++) {
        if (s[i].marks > bestStudent.marks) {
            bestStudent = s[i]; // Update if we find someone with higher marks
        }
    }
    
    return bestStudent; // Return the entire structure
}

int main() {
    int n;

    // Get number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Name (single word): ");
        scanf("%s", students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Call the function to get the top student
    struct Student topper = getTopper(students, n);

    printf("Top Student Details:\n");
    printf("Name:  %s\n", topper.name);
    printf("Roll:  %d\n", topper.roll);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}