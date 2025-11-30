//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1000], t[1000];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    int n1 = strlen(s);
    int n2 = strlen(t);

    if (n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0}; // Frequency array for lowercase letters

    // Count characters in s
    for (int i = 0; i < n1; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract frequency using t
    for (int i = 0; i < n2; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
