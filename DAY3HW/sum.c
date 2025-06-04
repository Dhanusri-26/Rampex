#include <stdio.h>

int main() {
    int n;
    char digits[100];
    int sum = 0;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter the digits: ");
    scanf("%s", digits);

    for (int i = 0; i < n; i++) {
        // Convert char digit to int by subtracting '0'
        sum += digits[i] - '0';
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
