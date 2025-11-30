//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    // Step 1: Compute prefix products
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix; // store product of all elements before i
        prefix *= nums[i];
    }

    // Step 2: Multiply with suffix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix; // multiply by product of elements after i
        suffix *= nums[i];
    }

    // Step 3: Print the result
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) {
            printf(","); // comma-separated
        }
    }
    printf("\n");

    return 0;
}
