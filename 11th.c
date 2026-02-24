#include <stdio.h>

int main() {
    int arr[5];  // Declare an array of size 5

    // Accept elements from the user
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements
    printf("The elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
