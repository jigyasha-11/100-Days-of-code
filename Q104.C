//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;
    int pivotIndex = -1;

    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum) {
            pivotIndex = i;
            break;  // leftmost pivot index
        }
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}
