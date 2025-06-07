#include <stdio.h>

struct filme {
  char titulo[30];
  int ano;
  char diretor[30];
};

int main(void) {
  struct filme f;
  FILE *pArquivo;

  pArquivo = fopen("filmes.txt", "rb");
  fread(&f, sizeof(struct filme), 1, pArquivo);
  fclose(pArquivo);

  printf("Título: %s\n", f.titulo);
  printf("Ano: %d\n", f.ano);
  printf("Diretor: %s\n", f.diretor);

  return 0;
}
