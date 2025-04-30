#include <stdio.h>

int main() {
    int limite, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &limite);

    for (int i = 0; i < limite; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("Soma dos múltiplos de 3 ou 5 abaixo de %d: %d\n", limite, soma);

    return 0;
}
