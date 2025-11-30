//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' ')) {
            // Capitalize first character of sentence or after a space
            str[i] = toupper(str[i]);
        } else {
            // Convert all other characters to lowercase
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}
