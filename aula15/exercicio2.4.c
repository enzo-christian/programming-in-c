#include <stdio.h>

int texto(FILE *arquivo) {
    int x, y;
    char conteudo[100];

    printf("Digite x e y do texto: ");
    scanf("%d %d", &x, &y);
    printf("Digite o conteúdo do texto (sem espaços): ");
    scanf("%99s", conteudo);

    return fprintf(arquivo, "<text x=\"%d\" y=\"%d\" font-family=\"Verdana\" font-size=\"20\" fill=\"black\">%s</text>\n", x, y, conteudo) > 0;
}