#include <stdio.h>

int main() {
    int arr[] = {10, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Replace each element with the sum of every other element
    for (int i = 0; i < n; i++) {
        int current = arr[i];
        arr[i] = sum - current;
        sum -= current;
    }

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
