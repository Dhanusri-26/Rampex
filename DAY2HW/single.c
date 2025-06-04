#include <stdio.h>

int main() {
    char str[100];
    int number = 0;

    // Input
    printf("Enter a string: ");
    scanf("%s", str);  // Use fgets() if input may include spaces

    // Build number from digits
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            number = number * 10 + (str[i] - '0');
        }
    }

    // Output the last digit
    int last_digit = number % 10;
    printf("Output: %d\n", last_digit);

    return 0;
}
