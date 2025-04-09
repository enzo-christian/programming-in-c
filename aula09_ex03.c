#include <stdio.h>

int subtrai3(int *valor) {
    *valor = *valor - 3;
}
int main(void) {
    int n;

    printf("Digite um número: \n");
    scanf("%d", &n);

    printf("Recebido: %d\n", n);
    printf("Resultado: %d\n", n - 3);
subtrai3(&n);
    printf("Valor atual: %d\n", n);
  return 0;
}
