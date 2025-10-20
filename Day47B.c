// To write a program to find the longest word in the sentenced.

#include <stdio.h>
#include <string.h> // For strlen(), strcspn(), strcpy()
#include <ctype.h>  // For isalpha()

// Function to find the longest word in a sentence
// Stores the longest word found in the 'longestWordBuffer'
void findLongestWord(const char *sentence, char *longestWordBuffer) {
    if (sentence == NULL || longestWordBuffer == NULL) {
        // Handle null inputs
        if (longestWordBuffer != NULL) {
            longestWordBuffer[0] = '\0'; // Ensure buffer is empty
        }
        return;
    }

    int current_word_length = 0;
    int max_word_length = 0;
    int start_of_current_word = 0; // Index of the start of the current word
    int start_of_longest_word = 0; // Index of the start of the longest word found so far

    // Initialize longestWordBuffer to be empty in case no words are found
    longestWordBuffer[0] = '\0';

    int i = 0;
    while (sentence[i] != '\0') {
        // If the current character is an alphabet, it's part of a word
        if (isalpha(sentence[i])) {
            if (current_word_length == 0) {
                // This is the start of a new word
                start_of_current_word = i;
            }
            current_word_length++;
        } else {
            // If the current character is not an alphabet, the word has ended (or hasn't started yet)
            if (current_word_length > max_word_length) {
                max_word_length = current_word_length;
                start_of_longest_word = start_of_current_word;
            }
            // Reset for the next word
            current_word_length = 0;
        }
        i++;
    }

    // After the loop, check if the last word was the longest
    // This handles cases where the sentence ends with a word, not punctuation/space
    if (current_word_length > max_word_length) {
        max_word_length = current_word_length;
        start_of_longest_word = start_of_current_word;
    }

    // Copy the longest word into the buffer
    if (max_word_length > 0) {
        int k = 0;
        for (i = 0; i < max_word_length; i++) {
            longestWordBuffer[k++] = sentence[start_of_longest_word + i];
        }
        longestWordBuffer[k] = '\0'; // Null-terminate the longest word
    } else {
        longestWordBuffer[0] = '\0'; // No words found
    }
}

int main() {
    char sentence[200]; // Buffer for the input sentence
    char longestWord[100]; // Buffer to store the longest word

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character if fgets included it
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Original sentence: \"%s\"\n", sentence);

    findLongestWord(sentence, longestWord); // Call the function

    if (strlen(longestWord) > 0) {
        printf("The longest word is: \"%s\" (Length: %lu)\n", longestWord, strlen(longestWord));
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}