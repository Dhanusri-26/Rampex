#include <stdio.h>

int main() {
    int arr[] = {10, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int zeroCount = 0, oneCount = 0;

    // Count zeros and ones
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else if (arr[i] == 1) {
            oneCount++;
        }
    }

    // Print the counts
    printf("zc=%d oc=%d\n", zeroCount, oneCount);

    return 0;
}
