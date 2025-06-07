#include <stdio.h>

int main(void) {
  char data[15];
  char hora[10];
  FILE *pArquivo;

  printf("Data: ");
  scanf("%14s", data);

  printf("Hora: ");
  scanf("%9s", hora);

  pArquivo = fopen("remedios.txt", "a");
  fprintf(pArquivo, "%s %s\n", data, hora);
  fclose(pArquivo);

  return 0;
}
