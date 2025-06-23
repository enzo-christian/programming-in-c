#include <stdio.h>

int main(void) {
  int numero, tentativas = 3;

  do {
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 7) {
      printf("Você ganhou!\n");
      break;
    } else {
      tentativas--;
      if (tentativas > 0)
        printf("Número errado. Tentativas restantes: %d\n", tentativas);
      else
        printf("Fim de jogo!\n");
    }
  } while (tentativas > 0);

  return 0;
}
