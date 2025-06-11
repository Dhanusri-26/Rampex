#include <stdio.h>

void moveNegativesToFront(int arr[], int n) {
    int j = 0; // Pointer for the next negative element position

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // Swap negative element to the front
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveNegativesToFront(arr, n);

    printf("Array after moving negatives to the front: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
