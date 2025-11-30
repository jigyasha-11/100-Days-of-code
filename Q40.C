//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long binary, temp;
    int remainder;
    long onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);
    temp = binary;

    while(temp != 0) {
        remainder = temp % 10;
        if(remainder == 0) remainder = 1;
        else remainder = 0;

        onesComplement += remainder * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's complement = %ld\n", onesComplement);
    return 0;
}
