#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0, length = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // supports spaces

    // Count words with length >= 2
    int word_len = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word_len++;
        } else {
            if (word_len >= 2) {
                count++;
            }
            word_len = 0; // reset for next word
        }
        i++;
    }

    // For last word if not followed by space
    if (word_len >= 2) {
        count++;
    }

    printf("Output: %d\n", count);
    return 0;
}
