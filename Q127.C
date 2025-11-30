//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input, convert to uppercase, and write to output
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    printf("Text converted to uppercase and written to output.txt successfully.\n");

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
