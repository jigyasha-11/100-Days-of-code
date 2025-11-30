//Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase to uppercase
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // convert uppercase to lowercase
        }
        i++;
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
