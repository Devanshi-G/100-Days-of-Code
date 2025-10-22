//To write a program to print the initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isupper, isspace, toupper

// Function to print initials with the last name in full
void printInitialsWithFullLastName(const char *name) {
    int len = strlen(name);
    int lastSpaceIndex = -1;
    int i;

    // Find the index of the last space to identify the start of the surname
    for (i = len - 1; i >= 0; i--) {
        if (isspace(name[i])) {
            lastSpaceIndex = i;
            break;
        }
    }

    // Print initials for first and middle names
    // Print initial of the first name
    if (len > 0 && !isspace(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    // Iterate to find middle name initials
    for (i = 1; i < len; i++) {
        // If it's a space, and the next character is not a space
        // AND it's before the start of the surname
        if (isspace(name[i]) && i + 1 < len && !isspace(name[i+1]) && (i + 1 < lastSpaceIndex || lastSpaceIndex == -1)) {
            printf("%c.", toupper(name[i + 1]));
        } else if (isspace(name[i]) && i + 1 < len && !isspace(name[i+1]) && (i + 1 == lastSpaceIndex)) {
             // This handles the case where there is only a first name and a last name
             // and the loop reaches the space before the last name.
             // We want to break here to prevent printing the initial of the last name.
             // However, the logic below handles the full last name.
             // So, this specific else if is mostly for clarity or if stricter rules were needed.
             // For now, it doesn't need to do anything specific.
        }
    }

    // Print the full last name
    if (lastSpaceIndex != -1) {
        // Skip leading spaces after the last actual space
        char *surnameStart = (char *)&name[lastSpaceIndex + 1];
        while (*surnameStart && isspace(*surnameStart)) {
            surnameStart++;
        }
        printf(" %s", surnameStart);
    }
    printf("\n"); // Newline at the end
}


int main() {
    char fullName[100]; // Max name length 99 characters + null terminator

    printf("Enter your full name: ");
    if (fgets(fullName, sizeof(fullName), stdin) != NULL) {
        // Remove trailing newline character
        fullName[strcspn(fullName, "\n")] = 0;

        printf("Full Name: %s\n", fullName);
        printf("Formatted Name: ");
        printInitialsWithFullLastName(fullName);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}