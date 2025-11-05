/*Write a program to take two strings s and t as inputs (assume all characters are lowercase).
The task is to determine if s and t are valid anagrams, meaning they contain the same characters
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".*/

#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(char *s, char *t) {
    int len1 = strlen(s);
    int len2 = strlen(t);

    // If lengths are not equal, they cannot be anagrams
    if (len1 != len2) {
        return 0; // Not an anagram
    }

    // Create two frequency arrays for 26 lowercase letters
    int freq1[26] = {0};
    int freq2[26] = {0};

    // Count frequency of characters in the first string
    for (int i = 0; i < len1; i++) {
        freq1[s[i] - 'a']++;
    }

    // Count frequency of characters in the second string
    for (int i = 0; i < len2; i++) {
        freq2[t[i] - 'a']++;
    }

    // Compare the frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return 0; // Not an anagram
        }
    }

    return 1; // They are anagrams
}

int main() {
    char s[100], t[100];

    printf("Enter the first string: ");
    scanf("%s", s);

    printf("Enter the second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}