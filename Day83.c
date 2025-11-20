#include <stdio.h>

// Define an enumeration for the months of the year.
// We'll explicitly set JANUARY = 1 to match the common calendar numbering.
enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    // Declare a variable of the enum type.
    enum Months currentMonth;

    // Set the current month.
    // You can change this to any other month to see the result.
    currentMonth = FEBRUARY;

    printf("Checking the number of days in the selected month...\n");

    // Use a switch statement to check the value of the current month.
    switch (currentMonth) {
        // Months with 31 days
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("This month has 31 days.\n");
            break;

        // Months with 30 days
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("This month has 30 days.\n");
            break;

        // Special case for February
        case FEBRUARY:
            printf("This month has 28 or 29 days (in a leap year).\n");
            break;

        // Default case for any unexpected values
        default:
            printf("Invalid month.\n");
            break;
    }

    return 0;
}