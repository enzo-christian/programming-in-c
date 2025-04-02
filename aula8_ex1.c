 #include <stdio.h>
    int main(void){
        int contador =1;
        int fim= 3;
        int numero = 0;
        
        do{ 
        /* receber o número*/
        printf("Digite o numero: ");
        scanf("%d", &numero);

        /* se ganhou */
        if(numero == 7) {
            printf("Você ganhou!");
            contador =3;
        } else {
            if(contador != 3)
            printf("Número errado. Tentativas restantes: %d. \n, fim - contador");
        } else {
            printf("Fim de Jogo");
        }
        
        contador++;
        } while(contador <= fim);
        /* se não ganhou */
        return 0;
    }