#include <stdio.h>

int main(void) {
    char nomeArquivo[100];
    int x, y, largura, altura;

    printf("Digite o nome do arquivo: ");
    scanf("%99s", nomeArquivo);

    printf("Digite a posição x y: ");
    scanf("%d %d", &x, &y);

    printf("Digite a largura e altura: ");
    scanf("%d %d", &largura, &altura);

    FILE *arquivo = fopen(nomeArquivo, "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }
    
    fprintf(arquivo, "<svg version="1.1"width="300" height="200"xmlns="http://www.w3.org/2000/svg">"\n");
    fprintf(arquivo, "<rect x="%d" y="%d" width="%d" height="%d" fill="red" />\n", x, y, largura, altura);
    fprintf(arquivo, "</svg>\n");

    fclose(arquivo);
    return 0;
}