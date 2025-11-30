//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if(a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Copy of numbers for HCF calculation
    tempA = a;
    tempB = b;

    // Euclid's algorithm to find HCF
    while(tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;

    // Calculate LCM
    int lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
