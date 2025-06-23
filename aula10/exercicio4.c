// igualdade.h
#ifndef IGUALDADE_H
#define IGUALDADE_H

int igual(int x, int y) {
    return x == y;
}

int maior(int x, int y) {
    return (x > y) ? x : y;
}

int menor(int x, int y) {
    return (x < y) ? x : y;
}

#endif

// main.c
#include <stdio.h>
#include "igualdade.h"

int main() {
    int a, b;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    if (igual(a, b))
        printf("Iguais: sim\n");
    else {
        printf("Iguais: nao\n");
        printf("Maior: %d\n", maior(a, b));
        printf("Menor: %d\n", menor(a, b));
    }

    return 0;
}
