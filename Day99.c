#include <stdio.h>
#include <stdlib.h> //For malloc and free

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student *ptr;

    //Allocating memory dynamically
    ptr = (struct Student*) malloc(sizeof(struct Student));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    //Using the arrow operator (->) to access members via a pointer
    printf("Enter Name: ");
    scanf("%s", ptr->name); // Strings don't need '&'

    printf("Enter Age: ");
    scanf("%d", &ptr->age); // Integers need '&'

    printf("Enter GPA: ");
    scanf("%f", &ptr->gpa); // Floats need '&'

    printf("\nStudent Details\n");
    printf("Name: %s\n", ptr->name);
    printf("Age:  %d\n", ptr->age);
    printf("GPA:  %.2f\n", ptr->gpa);

    //Free the memory
    free(ptr);

    return 0;
}