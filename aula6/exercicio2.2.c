#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite os três lados (-1 para encerrar): ");
    scanf("%d", &a);

    while (a != -1) {
        scanf("%d %d", &b, &c);

    // Teorema de Pitágoras
    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
    printf("É um triângulo retângulo\n");
        } else {
            printf("Não é um triângulo retângulo\n");
        }

        printf("Digite os três lados (-1 para encerrar): ");
        scanf("%d", &a);
    }

    return 0;
}
