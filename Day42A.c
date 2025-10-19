//To write a program to count vowels and consonanats in a string.

#include <stdio.h>
#include <string.h> // For strlen, strcspn
#include <ctype.h>  // For tolower, isalpha

// Function to count vowels in a string
int countVowels(const char *str) {
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) { // Loop until null terminator
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    return vowels;
}

// Function to count consonants in a string
int countConsonants(const char *str) {
    int consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) { // Loop until null terminator
        char ch = tolower(str[i]);
        // Check if it's an alphabet and not a vowel
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            consonants++;
        }
    }
    return consonants;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0; // Remove newline

    printf("Vowels: %d\n", countVowels(inputString));
    printf("Consonants: %d\n", countConsonants(inputString));

    return 0;
}