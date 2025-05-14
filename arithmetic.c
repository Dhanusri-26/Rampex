#include <stdio.h>
int main(){
    int a = 10, b = 15,res;

    // Addition
    res= a + b; 
    printf("a + b is %d\n", res);
  
    // Subtraction
    res = a - b; 
    printf("a - b is %d\n", res);

    // Multiplication
    res = a * b; 
    printf("a * b is %d\n", res);

    // Division
    res = a / b; 
    printf("a / b is %d\n", res);

    // Modulus
    res = a % b; 
    printf("a %% b is %d\n", res);
    return 0;
}