#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

// This function takes a 'struct Student' variable as a parameter
void printStudent(struct Student s) {
    printf("\nStudent Details\n");
    // We access members using the dot (.) operator
    printf("Name:  %s\n", s.name);
    printf("Age:   %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    // Declare a structure variable
    struct Student myStudent;

    printf("Enter Name (first name): ");
    scanf("%s", myStudent.name);

    printf("Enter Age: ");
    scanf("%d", &myStudent.age);

    printf("Enter Marks: ");
    scanf("%f", &myStudent.marks);

    // Pass the structure to the function
    printStudent(myStudent);

    return 0;
}