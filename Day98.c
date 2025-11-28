#include <stdio.h>
#include <string.h> //For string comparison

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1, p2;

    printf("Enter Details for Person 1: \n");
    printf("Enter Name: ");
    scanf("%s", p1.name);
    printf("Enter Age: ");
    scanf("%d", &p1.age);

    printf("\nEnter Details for Person 2: \n");
    printf("Enter Name: ");
    scanf("%s", p2.name);
    printf("Enter Age: ");
    scanf("%d", &p2.age);

    // To compare the structures we compare the age (integer) AND the name (string)
    // strcmp returns 0 if strings are identical
    if (p1.age == p2.age && strcmp(p1.name, p2.name) == 0) {
        printf("\nResult: The structs are IDENTICAL.\n");
    } else {
        printf("\nResult: The structs are DIFFERENT.\n");
    }

    return 0;
}