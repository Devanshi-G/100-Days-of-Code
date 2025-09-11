//To write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit or a special character
#include <stdio.h>
#include <ctype.h>  // for isupper, islower, isdigit

int main() {
    char ch;

    // Taking Input
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("The character is an Uppercase letter.\n");
    } else if (islower(ch)) {
        printf("The character is a Lowercase letter.\n");
    } else if (isdigit(ch)) {
        printf("The character is a Digit.\n");
    } else {
        printf("The character is a Special character.\n");
    }

    return 0;
}
