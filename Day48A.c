//To write a program to check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a rotation of another
bool areRotations(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
        return false;
    }

    // Create a temporary string by concatenating str1 with itself
    char temp[len1 * 2 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areRotations(str1, str2)) {
        printf("'%s' is a rotation of '%s'.\n", str2, str1);
    } else {
        printf("'%s' is NOT a rotation of '%s'.\n", str2, str1);
    }

    return 0;
}