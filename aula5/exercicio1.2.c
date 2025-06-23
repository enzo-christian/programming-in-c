#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Maior número: %d\n", (a > b) ? a : b);

    return 0;
}
