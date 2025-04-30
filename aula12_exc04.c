#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6];
    char letra;
    int erros = 0;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%5s", palavra);

    while (erros < 3) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);  // Espaço antes do %c para ignorar espaços anteriores

        if (strchr(palavra, letra)) {
            printf("Letra encontrada!\n");
        } else {
            erros++;
            if (erros == 3) {
                printf("Erros consecutivos: 3. Encerrando.\n");
            } else {
                printf("Letra não encontrada. Erros: %d\n", erros);
            }
        }
    }

    return 0;
}
