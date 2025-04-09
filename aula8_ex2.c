#include <stdio.h>

int main(void){
    int dado;
    int soma = 0;

    do {
    printf("Digite o dado: ");
    scanf("%d", &dado);

    if( dado < 1 || dado > 6) {
        printf("Entre 1 e 6");
        continue;
    }
    if(dado % 2 == 0){ 
        soma += dado;
    } else {
        printf("Total: %d", soma);
        break;
    }
    } while(1); // 1 = true

    return 0;
}