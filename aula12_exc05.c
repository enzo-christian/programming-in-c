#include <stdio.h>
#include <string.h>

int main() {
  char senha[100];

  printf("Digite a senha: ");
  scanf("%99s", senha);

  if (strlen(senha) >= 8) {
    printf("Senha conforme\n");
  } else {
    printf("Erro na senha\n");
  }

  return 0;
}
