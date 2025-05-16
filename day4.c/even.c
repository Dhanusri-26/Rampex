#include <stdio.h>

int main() {
  int number = 2;

  while (number <= 50) {
    printf("%d ", number);
    number += 2;
  }

  printf("\n");
  return 0;
}