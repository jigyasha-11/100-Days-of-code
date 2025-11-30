//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    // Step 1: Compute sum of the first window
    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k]; // Add new element, remove first element of previous window
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}
