#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char input[100];

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter the digits (as a continuous number): ");
    scanf("%s", input);

    // Print first digit as is
    printf("%c ", input[0]);

    // Print remaining digits in reverse
    for (int i = n - 1; i > 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
