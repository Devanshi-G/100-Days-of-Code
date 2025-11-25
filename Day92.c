#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    printf("--- Enter Details for 5 Students ---\n");
    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1); 

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n\n--- All Student Details ---\n");
    
    for (i = 0; i < 5; i++) {
        printf("Student %d -> Name: %s, Roll No: %d, Marks: %.2f\n", 
               i + 1, 
               students[i].name, 
               students[i].roll_no, 
               students[i].marks);
    }

    return 0;
}