//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter the elements of the array (0 to %d, missing one number): ", n);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    // Using sum formula to find missing number
    int total_sum = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    int sum_array = 0;
    for(int i = 0; i < n-1; i++) {
        sum_array += arr[i];
    }

    int missing_number = total_sum - sum_array;
    printf("The missing number is: %d\n", missing_number);

    return 0;
}
