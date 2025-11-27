#include <stdio.h>

// Define the nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define the main Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date doj; // 'doj' stands for Date of Joining
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name); //%s stops at whitespace

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Date of Joining (dd mm yyyy): ");
    // Accessing nested members using double dot notation
    scanf("%d %d %d", &emp.doj.day, &emp.doj.month, &emp.doj.year);

    printf("Employee Details: \n");
    printf("ID:           %d\n", emp.id);
    printf("Name:         %s\n", emp.name);
    printf("Salary:       %.2f\n", emp.salary);
    // Printing the nested date
    printf("Joining Date: %02d-%02d-%d\n", emp.doj.day, emp.doj.month, emp.doj.year);

    return 0;
}