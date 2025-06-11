#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, sum = 0, originalNum, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the sum of factorials of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if the sum equals the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
