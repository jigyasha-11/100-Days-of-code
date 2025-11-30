//Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
#include <stdio.h>

int main() {
    int i, j, space;
    int n = 4; // Number of rows in the top half

    // Top half
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (i = n-1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
