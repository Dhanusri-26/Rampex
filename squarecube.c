#include <stdio.h>

int main() {
    int number, square, cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}