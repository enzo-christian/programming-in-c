#include <stdio.h>

int main() {
    float v[3];
    float soma = 0;

    for(int i = 0; i < 3; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    printf("Soma: %.2f\n", soma);
    return 0;
}
