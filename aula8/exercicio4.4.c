#include <stdio.h>

int main(void) {
  int i, j, num;

  for (i = 0; i < 4; i++) {
    scanf("%d", &num);
    for (j = 0; j < num; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
