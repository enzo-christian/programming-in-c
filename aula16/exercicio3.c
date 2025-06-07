#include <stdio.h>

struct filme {
  char titulo[30];
  int ano;
  char diretor[30];
};

int main(void) {
  struct filme f;
  FILE *pArquivo;

  printf("Título: ");
  scanf("%29s", f.titulo);

  printf("Ano: ");
  scanf("%d", &f.ano);

  printf("Diretor: ");
  scanf("%29s", f.diretor);

  pArquivo = fopen("filmes.txt", "wb");
  fwrite(&f, sizeof(struct filme), 1, pArquivo);
  fclose(pArquivo);

  return 0;
}
