//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    if(num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while(num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
