#include <stdio.h>
#include <string.h>

int Palindromo(char x[10]){

    int i = 0, f = strlen(x) - 1;

    while(i != f){

        if(x[i] != x[f]){
            return 0;
        }else {
            return 1;
        }

        i++;
        f--;
    }

}

int main(){

        char palavra[10];

        printf("Digite uma palavra: ");
        scanf("%9s", palavra);

        if(Palindromo(palavra) == 1){
            printf("Resultado: é um palíndromo!\n");
        } else {
            printf("Resultado: NÃO é!\n");
        }

    return 0;
}