//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    int i = 0, start = 0;
    while(1) {
        if(sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
        if(sentence[i] == '\0')
            break;
        i++;
    }

    printf("Reversed words sentence: %s\n", sentence);
    return 0;
}
