#include <stdio.h>

int main() {
    int n, key, low, high, mid, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; // declare array AFTER getting n

    printf("Enter the elements (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    low = 0;          // start from index 0
    high = n - 1;     // last index

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            pos = mid;
            break;    // exit loop once found
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (pos != -1) {
        printf("Element found at position %d\n", pos + 1); // 1-based position
    } else {
        printf("Element not found\n");
    }

    return 0;
}
