//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / pow(10, digits);

    swapped = lastDigit * pow(10, digits) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
