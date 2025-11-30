//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
//LINEAR SEARCH VERSION
#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int ceilIndex = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Index of ceil of %d: %d\n", x, ceilIndex);
    return 0;
}

//  BINARY SEARCH VERSION
#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int left = 0, right = n - 1;
    int ceilIndex = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] >= x) {
            ceilIndex = mid; // potential ceil
            right = mid - 1; // search on left side for first occurrence
        } else {
            left = mid + 1;
        }
    }

    printf("Index of ceil of %d: %d\n", x, ceilIndex);
    return 0;
}
