// util.h
#ifndef UTIL_H
#define UTIL_H

#define PI 3.14159

double diametro(double raio) {
    return 2 * raio;
}

double circunferencia(double raio) {
    return 2 * PI * raio;
}

double area(double raio) {
    return PI * raio * raio;
}

#endif

// main.c
#include <stdio.h>
#include "util.h"

int main() {
    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    printf("Diâmetro: %.2f\n", diametro(raio));
    printf("Circunferência: %.2f\n", circunferencia(raio));
    printf("Área: %.2f\n", area(raio));

    return 0;
}
