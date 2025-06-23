#include <stdio.h>

int testa_par(int n) {
  return n % 2 == 0;
}

int main(void) {
  printf("4 é par? %d\n", testa_par(4));
  printf("5 é par? %d\n", testa_par(5));
  printf("6 é par? %d\n", testa_par(6));
  return 0;
}
