//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of each lowercase letter
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i])) {
            freq1[tolower(str1[i]) - 'a']++;
        }
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i])) {
            freq2[tolower(str2[i]) - 'a']++;
        }
    }

    // Compare frequency arrays
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
