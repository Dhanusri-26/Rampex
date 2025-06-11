#include <stdio.h>
#include <math.h>

// Function to reverse the digits of a number
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

// Function to check if a number is an Adam number
int isAdamNumber(int num) {
    int revNum = reverse(num);
    int squareNum = num * num;
    int squareRevNum = revNum * revNum;
    return squareNum == reverse(squareRevNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAdamNumber(num)) {
        printf("%d is an Adam number.\n", num);
    } else {
        printf("%d is not an Adam number.\n", num);
    }

    return 0;
}
