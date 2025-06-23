#include <stdio.h>

int main(void) {
  int numero, soma = 0;

  while (1) {
    printf("Digite um número de 1 a 6: ");
    scanf("%d", &numero);

    if (numero % 2 != 0)
      break;
      
    soma += numero;
  }

  printf("Soma dos pares: %d\n", soma);

  return 0;
}
