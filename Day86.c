#include <stdio.h>

typedef enum {
    ADD = 1,      //Start at 1 to match menu input easily
    SUBTRACT,
    MULTIPLY
} MenuOption;

int main() {
    int choice;
    int num1, num2;

    //Display Menu
    printf("--- Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    //Get numbers for the operation
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //Switch on the enum value
    switch (choice) {
        case ADD:
            printf("Result: %d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("Result: %d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("Result: %d\n", num1 * num2);
            break;
        default:
            printf("Invalid menu choice.\n");
    }

    return 0;
}