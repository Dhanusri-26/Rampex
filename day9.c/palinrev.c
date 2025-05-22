#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int number, reversed;

    printf("Enter an integer: ");
    scanf("%d", &number);

    reversed = reverseNumber(number);

    if (number == reversed) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
