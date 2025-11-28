#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    
    //Declare a pointer to the structure and assign the address of 's'
    struct Student *ptr;
    ptr = &s;

    printf("Enter Details: \n");

    //Modify data using the pointer (Taking Input)
    //'ptr->name' already acts as an address for the string
    printf("Enter Name: ");
    scanf("%s", ptr->name); 

    //We need '&' to get the address of the specific integer/float member
    printf("Enter Age: ");
    scanf("%d", &ptr->age);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    //Display data using the -> operator
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}