#include <stdio.h>
#include <stdlib.h>

// Function to find the minimum number of swaps required to sort the array
int minSwaps(int arr[], int n) {
    // Create an array of pairs where each pair contains an element and its index
    int pairs[n][2];
    for (int i = 0; i < n; i++) {
        pairs[i][0] = arr[i];
        pairs[i][1] = i;
    }

    // Sort the pairs based on the array elements
    qsort(pairs, n, sizeof(pairs[0]), [](const void *a, const void *b) {
        return ((int *)a)[0] - ((int *)b)[0];
    });

    // Create a visited array to keep track of visited elements
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Initialize swap count
    int swapCount = 0;

    // Traverse through the array elements
    for (int i = 0; i < n; i++) {
        // If already visited or already in the correct position, skip
        if (visited[i] || pairs[i][1] == i) {
            continue;
        }

        // Calculate the size of the cycle
        int cycleSize = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = 1;
            j = pairs[j][1];
            cycleSize++;
        }

        // Update swap count
        if (cycleSize > 1) {
            swapCount += (cycleSize - 1);
        }
    }

    return swapCount;
}

int main() {
    int arr[] = {4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int swaps = minSwaps(arr, n);
    printf("Minimum swaps required to sort the array: %d\n", swaps);

    return 0;
}
