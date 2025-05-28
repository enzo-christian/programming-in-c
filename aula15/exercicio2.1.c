#include <stdio.h>

int retangulo(FILE *arquivo){
    int x, y, largura, altura;

    printf("Digite x, y, largura e altura do retângulo: ");
    scanf("%d %d %d %d", &x, &y, &largura, &altura);

    return fprintf(arquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill =\"red\" />\n", x, y, largura, altura) > 0;
}