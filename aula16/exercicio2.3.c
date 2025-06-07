#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *pArquivo = fopen("remedios.txt", "r");
  char linha[50];
  char ultima[50];

  while (fgets(linha, 50, pArquivo) != NULL) {
    strcpy(ultima, linha);
  }

  printf("Última: %s", ultima);

  fclose(pArquivo);
  return 0;
}
