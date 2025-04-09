#include <stdio.h>

int testa_par(int x){
    if(x % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("%d é par? %d", numero, testa_par(numero));

    return 0;
}