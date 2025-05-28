#include <stdio.h>

// RETÂNGULO

int retangulo(FILE *arquivo){
    int x, y, largura, altura;

    printf("Digite x, y, largura e altura do retângulo: ");
    scanf("%d %d %d %d", &x, &y, &largura, &altura);

    return fprintf(arquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill =\"red\" />\n", x, y, largura, altura) > 0;
}

// CIRCULO

int circulo(FILE *arquivo){
    int cx, cy, r;

    printf("Digite cx, cy e r do circulo: ");
    scanf("%d %d %d %d", &cx, &cy, &r);

    return fprintf(arquivo, "<circle cx="%d" cy="%d" r="%d"/>\n", cx, cy, r) > 0;
}

// LINHA

int linha(FILE *arquivo) {
    int x1, y1, x2, y2;

    printf("Digite x1, y1, x2, y2 da linha: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    return fprintf(arquivo, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />\n", x1, y1, x2, y2) > 0;
}