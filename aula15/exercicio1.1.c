#include <stdio.h>

int main(void){

    char nome[50] = "";
    int x = 0;
    int y = 0;
    int largura = 0;
    int altura = 0;

    FILE *pArquivo = NULL;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    printf("Digite a posicao X de um quadrado: ");
    scanf("%d", &x);

    printf("Digite a posicao Y de um quadrado: ");
    scanf("%d", &y);

    printf("Digite  a largura (width) do quadrado: ");
    scanf("%d", &largura);

    printf("Digite a altura (height) do quadrado: ");
    scanf("%d", &altura);

    pArquivo = fopen(nome, "w");

     if (pArquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(pArquivo, "<svg version='1.1' ");
    fprintf(pArquivo, "width='%d' height='%d' ", largura, altura);
    fprintf(pArquivo, "xmlns='http://www.w3.org/2000/svg'> ");
    fprintf(pArquivo, "<rect x='%d' y='%d' width='%d' height='%d' fill='red' />", x, y, largura, altura);
    fprintf(pArquivo, "</svg>");

    fclose(pArquivo);



    return 0;
}