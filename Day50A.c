//To write a program to change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to convert month number to month abbreviation
void getMonthAbbreviation(int monthNum, char *monthAbbr) {
    switch (monthNum) {
        case 1: strcpy(monthAbbr, "Jan"); break;
        case 2: strcpy(monthAbbr, "Feb"); break;
        case 3: strcpy(monthAbbr, "Mar"); break;
        case 4: strcpy(monthAbbr, "Apr"); break;
        case 5: strcpy(monthAbbr, "May"); break;
        case 6: strcpy(monthAbbr, "Jun"); break;
        case 7: strcpy(monthAbbr, "Jul"); break;
        case 8: strcpy(monthAbbr, "Aug"); break;
        case 9: strcpy(monthAbbr, "Sep"); break;
        case 10: strcpy(monthAbbr, "Oct"); break;
        case 11: strcpy(monthAbbr, "Nov"); break;
        case 12: strcpy(monthAbbr, "Dec"); break;
        default: strcpy(monthAbbr, "Inv"); // Invalid month
    }
}

// Function to change the date format
void changeDateFormat(const char *inputDate, char *outputDate) {
    int day, month, year;
    char monthAbbr[4];

    // Parse the input date string
    sscanf(inputDate, "%d/%d/%d", &day, &month, &year);

    // Get the month abbreviation
    getMonthAbbreviation(month, monthAbbr);

    // Format the output date string
    sprintf(outputDate, "%02d-%s-%d", day, monthAbbr, year);
}

int main() {
    char inputDate[15]; // e.g., "01/04/2023"
    char outputDate[15]; // e.g., "01-Apr-2023"

    printf("Enter date in dd/mm/yyyy format (e.g., 01/04/2023): ");
    scanf("%s", inputDate);

    // Call the function to change the date format
    changeDateFormat(inputDate, outputDate);

    printf("Original Date: %s\n", inputDate);
    printf("Formatted Date: %s\n", outputDate);

    return 0;
}