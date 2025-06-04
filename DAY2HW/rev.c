#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int i = 0, length = 0;

    // Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Output
    printf("Reversed string: %s\n", reversed);

    return 0;
}
