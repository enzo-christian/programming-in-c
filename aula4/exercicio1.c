#include <stdio.h>

int main(void) {
    float imc;

    printf("Digite o valor do IMC: ");
    scanf("%f", &imc);

    if (imc >= 18.5 && imc <= 24.9) {
        puts("Intervalo normal");
    } else {
        puts("Fora do intervalo normal");
    }

    return 0;
}
