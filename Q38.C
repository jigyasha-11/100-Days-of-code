S//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        sum += num % 10;  // Add last digit to sum
        num /= 10;        // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
