#include <stdio.h>

enum Gender {
    MALE,   // 0
    FEMALE, // 1
    OTHER   // 2
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1;
    int inputOption;

    printf("Enter Name: ");
    scanf("%s", p1.name);

    printf("Choose Gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", &inputOption);

    p1.gender = (enum Gender)inputOption;

    printf("\nDetails\n");
    printf("Name: %s\n", p1.name);
    
    printf("Gender: ");
    switch (p1.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
        default:     printf("Unknown\n"); break;
    }

    return 0;
}