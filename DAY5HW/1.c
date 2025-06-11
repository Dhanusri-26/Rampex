#include <stdio.h>

int main() {
    int num, digit, count = 0, rem;

    // Input the number and the digit to search for
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    // Process each digit of the number
    while (num != 0) {
        rem = num % 10; // Extract the last digit
        if (rem == digit) {
            count++; // Increment count if digit matches
        }
        num /= 10; // Remove the last digit
    }

    // Output the result
    printf("The digit %d appears %d times.\n", digit, count);

    return 0;
}
