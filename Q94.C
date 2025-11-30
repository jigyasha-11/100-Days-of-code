//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longest[1000];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, start = 0;
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        // If current character is space or end of string, word ends
        if (sentence[i] == ' ' || sentence[i+1] == '\0' || sentence[i+1] == '\n') {
            int end = (sentence[i+1] == '\0' || sentence[i+1] == '\n') ? i : i - 1;
            int length = end - start + 1;

            if (length > maxLength) {
                maxLength = length;
                strncpy(longest, sentence + start, length);
                longest[length] = '\0'; // terminate the word
            }
            start = i + 1; // move to start of next word
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
