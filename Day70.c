#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for tolower() and toupper() functions

// Function to convert a string to sentence case
void convertToSentenceCase(char str[]) {
    int i;
    int capitalizeNext = 1;

    // Iterate through the string
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);

        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        }

        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalizeNext = 1;
        }
    }
}

int main() {
    char inputString[200];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;

    printf("Original string: %s\n", inputString);
    convertToSentenceCase(inputString);

    printf("Sentence case string: %s\n", inputString);

    return 0;
}