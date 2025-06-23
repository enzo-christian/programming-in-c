#include <stdio.h>

int pedirNumero() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}

int somar(int a, int b) {
    return a + b;
}

void mostrarSoma(int soma) {
    printf("A soma é: %d\n", soma);
}

int main() {
    int n1 = pedirNumero();
    int n2 = pedirNumero();
    int resultado = somar(n1, n2);
    mostrarSoma(resultado);
    return 0;
}
