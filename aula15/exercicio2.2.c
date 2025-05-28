#include <stdio.h>

int circulo(FILE *arquivo){
    int cx, cy, r;

    printf("Digite cx, cy e r do circulo: ");
    scanf("%d %d %d %d", &cx, &cy, &r);

    return fprintf(arquivo, "<circle cx="%d" cy="%d" r="%d"/>\n", cx, cy, r) > 0;
}