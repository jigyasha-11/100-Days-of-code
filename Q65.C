//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, i, key, left, right, mid, found = 0;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary Search
    left = 0;
    right = n - 1;
    while(left <= right) {
        mid = left + (right - left) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            found = 1;
            break;
        } else if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
