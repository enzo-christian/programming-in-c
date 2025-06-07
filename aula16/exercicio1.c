#include <stdio.h>

int main(void) {
  FILE *pArquivo = fopen("nomes.txt", "r");
  char destino[80];

  int i = 1;
  while (fgets(destino, 80, pArquivo) != NULL) {
    printf("Nome %d: %s", i, destino);
    i++;
  }

  fclose(pArquivo);
  return 0;
}
