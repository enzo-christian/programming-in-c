#include <stdio.h>

int main(void) {
  int i = 1;

  while (i <= 20) {
    if (i % 3 == 0) {
      i++;
      continue;
    }
    printf("%d ", i);
    i++;
  }

  return 0;
}
