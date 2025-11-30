//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;

    while(temp != 0) {
        int digit = temp % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if(hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits in the number.\n");

    return 0;
}
