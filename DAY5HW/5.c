#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display digits from right to left
    printf("Digits from right to left: ");
    while (num != 0) {
        printf("%d ", num % 10);  // Print the last digit
        num /= 10;                // Remove the last digit
    }
    printf("\n");

    return 0;
}
