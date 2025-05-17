#include <stdio.h>

int main() {
    int n, first = 0, second = 1, nextTerm;
    
    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Display the first two terms
    printf("Fibonacci Series: %d, %d, ", first, second);
    
    // Calculate and display the remaining terms
    for (int i = 3; i <= n; i++) {
        nextTerm = first + second;
        printf("%d, ", nextTerm);
        first = second;
        second = nextTerm;
    }
    printf("\n");
    
    return 0;
}