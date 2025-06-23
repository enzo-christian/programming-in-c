#include <stdio.h>

int main(void) {
    float nota, soma = 0;
    int contador = 0;

    printf("Digite uma nota (-5 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -5) {
        soma += nota;
        contador++;

        printf("Digite uma nota (-5 para encerrar): ");
        scanf("%f", &nota);
    }

    if (contador > 0) {
        printf("Média: %.2f\n", soma / contador);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }

    return 0;
}
