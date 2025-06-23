#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
    puts("Diagnóstico: Magreza");
    } else {
    if (imc >= 18.5 && imc < 25) {
    puts("Diagnóstico: Normal");
    } else {
    if (imc >= 25 && imc < 30) {
    puts("Diagnóstico: Sobrepeso");
    } else {
    if (imc >= 30 && imc < 35) {
    puts("Diagnóstico: Obesidade grau 1");
    } else {
    if (imc >= 35 && imc < 40) {
    puts("Diagnóstico: Obesidade grau 2");
    } else {
    puts("Diagnóstico: Obesidade grau 3 (mórbida)");
    }
    }
    }
}
}

    return 0;
}
