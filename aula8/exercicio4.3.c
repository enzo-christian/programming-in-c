#include <stdio.h>

int main(void) {
  int A;

  for (A = 0; A <= 1; A++) {
    printf("A: %d  ! %d = %d\n", A, A, !A);
  }

  return 0;
}
