//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int i = 0;

    // Print initials of all names except last
    while(i < len) {
        if(name[i] != ' ' && (i == 0 || name[i-1] == ' ')) {
            int j = i;
            // Check if this is the last word
            int isLast = 1;
            for(int k = i+1; k < len; k++) {
                if(name[k] == ' ') {
                    isLast = 0;
                    break;
                }
            }
            if(!isLast) {
                printf("%c. ", toupper(name[i])); // Print initial
            } else {
                printf("%s", &name[i]);
