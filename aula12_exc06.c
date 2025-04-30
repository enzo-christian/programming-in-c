#include <stdio.h>
#include <string.h>

int main() {
  char nome[50];
  char sobrenome[50];
  char completo[100];

  printf("Digite o nome: ");
  scanf("%49s", nome);
  printf("Digite o sobrenome: ");
  scanf("%49s", sobrenome);

  strcpy(completo, nome);
  strcat(completo, " ");
  strcat(completo, sobrenome);

  printf("Nome completo: %s\n", completo);

  return 0;
}
