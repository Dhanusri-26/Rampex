#include <stdio.h>

int findPeakElement(int arr[], int n) {
    if (n == 1) return arr[0]; // single element array

    // Check if first element is peak
    if (arr[0] >= arr[1]) return arr[0];

    // Check if last element is peak
    if (arr[n - 1] >= arr[n - 2]) return arr[n - 1];

    // Check for peak in middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Peak element is %d", findPeakElement(arr, n));
    return 0;
}