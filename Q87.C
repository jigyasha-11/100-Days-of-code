//Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if(str[i] == ' ') {
            spaces++;
        } else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // do nothing for alphabets
        } else {
            special++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
