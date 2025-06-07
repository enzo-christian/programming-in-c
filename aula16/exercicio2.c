#include <stdio.h>

int main(void) {
  char titulo[30];
  char personagem[30];
  FILE *pArquivo;

  printf("Digite o título do livro: ");
  scanf("%29s", titulo);

  pArquivo = fopen(titulo, "w");

  while (1) {
    printf("Digite um personagem (fim para encerrar): ");
    scanf("%29s", personagem);
    if (strcmp(personagem, "fim") == 0) {
      break;
    }
    fprintf(pArquivo, "%s\n", personagem);
  }

  fclose(pArquivo);
  return 0;
}
