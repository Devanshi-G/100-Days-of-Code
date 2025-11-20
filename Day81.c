#include <stdio.h>

// Define an enumeration for the days of the week
enum Days {
    SUNDAY,    // SUNDAY is assigned the value 0
    MONDAY,    // MONDAY is assigned the value 1
    TUESDAY,   // TUESDAY is assigned the value 2
    WEDNESDAY, // WEDNESDAY is assigned the value 3
    THURSDAY,  // THURSDAY is assigned the value 4
    FRIDAY,    // FRIDAY is assigned the value 5
    SATURDAY   // SATURDAY is assigned the value 6
};

int main() {
    // Print a header for the output
    printf("Days of the week with their integer values:\n");

    // Loop through the enumeration from SUNDAY to SATURDAY
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        // Use a switch statement to print the name of the day
        switch (i) {
            case SUNDAY:
                printf("SUNDAY: %d\n", i);
                break;
            case MONDAY:
                printf("MONDAY: %d\n", i);
                break;
            case TUESDAY:
                printf("TUESDAY: %d\n", i);
                break;
            case WEDNESDAY:
                printf("WEDNESDAY: %d\n", i);
                break;
            case THURSDAY:
                printf("THURSDAY: %d\n", i);
                break;
            case FRIDAY:
                printf("FRIDAY: %d\n", i);
                break;
            case SATURDAY:
                printf("SATURDAY: %d\n", i);
                break;
        }
    }

    return 0;
}