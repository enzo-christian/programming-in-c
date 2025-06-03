#include <stdio.h>
#include <stdlib.h>

// CHAMADA DAS FUNÇÕES

int abertura(FILE *arquivo);
int fechamento(FILE *arquivo);
int retangulo(FILE *arquivo);
int circulo(FILE *arquivo);
int linha(FILE *arquivo);
int texto(FILE *arquivo);

// CÓDIGO

int main(void) {
    char nomeArquivo[100];
    char opcao;

    printf("Digite o nome do arquivo SVG: ");
    scanf("%99s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    abertura(arquivo);

    do {
        printf("Opções: R - Retângulo, C - Círculo, L - Linha, T - Texto, F - Finalizar, Digite uma opção: \n");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'R': case 'r': retangulo(arquivo); break;
            case 'C': case 'c': circulo(arquivo); break;
            case 'L': case 'l': linha(arquivo); break;
            case 'T': case 't': texto(arquivo); break;
            case 'F': case 'f': break;
            default: printf("Opção inválida.\n");
        }
    } while (opcao != 'F' && opcao != 'f');

    fechamento(arquivo);
    fclose(arquivo);

    printf("Arquivo SVG '%s' criado com sucesso.\n", nomeArquivo);
    return 0;
}

// FUNÇÕES

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

// TEXTO

int texto(FILE *arquivo) {
    int x, y;
    char conteudo[100];

    printf("Digite x e y do texto: ");
    scanf("%d %d", &x, &y);
    printf("Digite o conteúdo do texto (sem espaços): ");
    scanf("%99s", conteudo);

    return fprintf(arquivo, "<text x=\"%d\" y=\"%d\" font-family=\"Verdana\" font-size=\"20\" fill=\"black\">%s</text>\n", x, y, conteudo) > 0;
}

// FUNÇÕES AUXILIARES

int abertura(FILE *arquivo) {
    return fprintf(arquivo, "<svg version=\"1.1\" width=\"300\" height=\"200\" xmlns=\"http://www.w3.org/2000/svg\">\n") > 0;
}

int fechamento(FILE *arquivo) {
    return fprintf(arquivo, "</svg>\n") > 0;
}
