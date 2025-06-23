#include <stdio.h>
#include "igualdade.h"

int pedirNumero() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int n1 = pedirNumero();
    int n2 = pedirNumero();
    int n3 = pedirNumero();

    int maiorTemp = maior(n1, n2);
    int maiorFinal = maior(maiorTemp, n3);

    printf("Maior número: %d\n", maiorFinal);
    return 0;
}
