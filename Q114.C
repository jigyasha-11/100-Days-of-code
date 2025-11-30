//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        bool seen[256] = {false}; // Track characters in the current substring
        int length = 0;

        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]]) {
                break; // Character repeated, end current substring
            }
            seen[(unsigned char)s[j]] = true;
            length++;
        }

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLength);

    return 0;
}

