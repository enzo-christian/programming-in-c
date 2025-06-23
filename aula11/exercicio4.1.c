#include <stdio.h>

float media(float v[]) {
    return (v[0] + v[1]) / 2.0;
}

float dobro(float v[]) {
    v[0] *= 2.0;
    v[1] *= 2.0;
    return (v[0] + v[1]) / 2.0;
}

void maior(float v[]) {
    if (v[1] > v[0]) {
        float temp = v[0];
        v[0] = v[1];
        v[1] = temp;
    }
}

int main() {
    float numeros[2];

    printf("Digite 2 números:\n");
    scanf("%f %f", &numeros[0], &numeros[1]);

    printf("Antes da média: %.2f %.2f\n", numeros[0], numeros[1]);
    printf("Média: %.2f\n", media(numeros));

    printf("Antes do dobro: %.2f %.2f\n", numeros[0], numeros[1]);
    printf("Nova média com dobro: %.2f\n", dobro(numeros));
    printf("Depois do dobro: %.2f %.2f\n", numeros[0], numeros[1]);

    printf("Antes de maior(): %.2f %.2f\n", numeros[0], numeros[1]);
    maior(numeros);
    printf("Depois de maior(): %.2f %.2f\n", numeros[0], numeros[1]);

    return 0;
}
