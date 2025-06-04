#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    
    printf("Enter the number: ");
    scanf("%s", input);
    
    int length = strlen(input);
    
    printf("Reversed: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");
    
    return 0;
}
