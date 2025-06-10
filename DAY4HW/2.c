#include <stdio.h>

void updateArray(int arr[], int n) {
    if (n <= 1) {
        printf("Array size must be greater than 1.\n");
        return;
    }

    // Store the first element
    int prev = arr[0];
    arr[0] = arr[0] * arr[1];

    // Update the rest of the array elements
    for (int i = 1; i < n - 1; i++) {
        int current = arr[i];
        arr[i] = prev * arr[i + 1];
        prev = current;
    }

    // Update the last element
    arr[n - 1] = prev * arr[n - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    updateArray(arr, n);

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
