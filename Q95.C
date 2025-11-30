//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

// Function to check if str2 is a substring of str1
int isSubstring(char str1[], char str2[]) {
    return strstr(str1, str2) != NULL;
}

int main() {
    char str1[1000], str2[1000];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if(len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }
    
    // Concatenate str1 with itself
    char temp[2000];
    strcpy(temp, str1);
    strcat(temp, str1);
    
    // Check if str2 is a substring of temp
    if(isSubstring(temp, str2))
        printf("Yes, it is a rotation\n");
    else
        printf("Not a rotation\n");
    
    return 0;
}
