#include <stdio.h>

int main() {
int numero;
char opcao;

while (1) {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
    for (int j = 1; j <= i; j++) {
    printf("*");
}
    printf("\n");
}

    printf("Digite A (esquerda), D (direita), F (fim): ");
    scanf(" %c", &opcao);  

    if (opcao == 'F' || opcao == 'f') {
    break;
}
    if (opcao == 'D' || opcao == 'd') {
    for (int i = 1; i <= numero; i++) {
    for (int j = 1; j <= numero - i; j++) {
    printf(" ");
}
    for (int j = 1; j <= i; j++) {
    printf("*");
}
    printf("\n");
}
}

if (opcao == 'A' || opcao == 'a') {
for (int i = 1; i <= numero; i++) {
for (int j = 1; j <= i; j++) {
    printf("*");
}
    printf("\n");
}
}
}

    return 0;
}
