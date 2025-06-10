#include <stdio.h>

int isMajorityElement(int arr[], int n, int x) {
    int mid = n / 2;
    if (arr[mid] == x && arr[mid + n / 2] == x)
        return 1;
    return 0;
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    if (isMajorityElement(arr, n, x))
        printf("The majority element is: %d\n", x);
    else
        printf("No majority element found.\n");

    return 0;
}
