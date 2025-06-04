#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int odd_count = 0, even_count = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count odd and even numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Output results
    printf("Odd = %d, Even = %d\n", odd_count, even_count);

    return 0;
}
