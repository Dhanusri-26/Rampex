#include <stdio.h>

int areArraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not equal
        }
    }
    return 1; // Arrays are equal
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    if (areArraysEqual(arr1, arr2, size)) {
        printf("Arrays are equal\n");
    } else {
        printf("Arrays are not equal\n");
    }

    return 0;
}
