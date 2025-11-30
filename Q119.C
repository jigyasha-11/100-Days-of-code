//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = 0;

    // XOR approach
    for(int i = 0; i < n; i++) {
        repeated ^= arr[i];       // XOR all array elements
    }
    for(int i = 1; i <= n-1; i++) {
        repeated ^= i;            // XOR numbers from 1 to n-1
    }

    printf("The repeated element is: %d\n", repeated);

    return 0;
}
