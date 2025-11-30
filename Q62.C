//Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;  // Stop at first occurrence
        }
    }

    if(!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
