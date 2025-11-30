//Reverse a string.#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {
        // If character is lowercase alphabet
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
