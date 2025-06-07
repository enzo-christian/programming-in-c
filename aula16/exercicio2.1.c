#include <stdio.h>

int main(void) {
  char titulo[30];
  char personagem[30];
  FILE *pArquivo;
  char tecla;

  printf("Digite o título do livro: ");
  scanf("%29s", titulo);

  pArquivo = fopen(titulo, "r");

  while (fgets(personagem, 30, pArquivo) != NULL) {
    printf("Pressione P para próximo ou F para sair: ");
    scanf(" %c", &tecla);

    if (tecla == 'F' || tecla == 'f') {
      break;
    } else if (tecla == 'P' || tecla == 'p') {
      printf("Personagem: %s", personagem);
    }
  }

  fclose(pArquivo);
  return 0;
}
