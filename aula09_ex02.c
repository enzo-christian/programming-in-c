#include <stdio.h>

int subtrai3(int valor) {
    return valor - 3;
}
int main(void) {
    int n;

    printf("Digite um número: \n");
    scanf("%d", &n);

    printf("Recebido: %d\n", n);
    int resultado = subtrai3(n);
    
    printf("Resultado: %d\n", resultado);
    printf("Valor atual: %d\n", n);
  return 0;
}
