//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original number

    while(num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reverse of %d is %d\n", original, reversed);

    return 0;
}
