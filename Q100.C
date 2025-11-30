//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("All substrings of '%s' are:\n", str);

    // Generate all substrings
    for(int i = 0; i < len; i++) {      // Starting index
        for(int j = i; j < len; j++) {  // Ending index
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
