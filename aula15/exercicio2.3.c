#include <stdio.h>

int linha(FILE *arquivo) {
    int x1, y1, x2, y2;

    printf("Digite x1, y1, x2, y2 da linha: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    return fprintf(arquivo, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />\n", x1, y1, x2, y2) > 0;
}