//Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");
    
    // Print the first character as initial if it's not space
    if(name[0] != ' ')
        printf("%c", toupper(name[0]));

    // Loop through the rest of the string
    for(int i = 1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ' && name[i] != ' ') {
            printf("%c", toupper(name[i])); // Print first letter after space
        }
    }
    
    printf("\n");
    return 0;
}
