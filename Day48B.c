//To write a program to reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isspace

// Function to reverse a substring (word)
void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in a sentence
void reverseWordsInSentence(char *sentence) {
    char *word_start = sentence;
    char *temp = sentence; // temp pointer for traversing the sentence

    while (*temp) {
        // If current character is not a space and we are at the beginning of a word
        // or the previous character was a space, then this is the start of a word.
        if (!isspace(*temp) && (temp == sentence || isspace(*(temp - 1)))) {
            word_start = temp;
        }

        // If current character is a space, or we are at the end of the sentence
        // and we have found a word, then reverse that word.
        if (isspace(*temp) && word_start != NULL) {
            // temp-1 is the end of the current word
            reverseWord(word_start, temp - 1);
            word_start = NULL; // Reset word_start
        } else if (*(temp + 1) == '\0' && word_start != NULL) {
            // End of sentence, reverse the last word
            reverseWord(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
}

int main() {
    char sentence[1000]; // Assuming maximum sentence length of 999 characters

    printf("Enter a sentence: ");
    // Use fgets to read a whole line including spaces
    // sizeof(sentence) - 1 for the null terminator, stdin for standard input
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        // Remove the trailing newline character if present
        sentence[strcspn(sentence, "\n")] = 0;

        printf("Original sentence: %s\n", sentence);

        reverseWordsInSentence(sentence);

        printf("Sentence with reversed words: %s\n", sentence);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}