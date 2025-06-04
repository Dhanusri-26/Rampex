#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_special(char ch) {
    // Returns 1 if ch is not a letter (you can adjust as needed)
    return !isalpha(ch);
}

int main() {
    char str[200];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to allow spaces

    int left = 0;
    int right = strlen(str) - 1;

    // Remove trailing newline if present
    if (str[right] == '\n') {
        str[right] = '\0';
        right--;
    }

    while (left < right) {
        // Skip special characters
        if (is_special(str[left])) {
            left++;
        } else if (is_special(str[right])) {
            right--;
        } else {
            // Swap normal characters
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

