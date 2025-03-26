#include <stdio.h>

int main(void) {
    char produto;
    int batata = 0, hamburguer = 0, suco = 0, combo = 0;
    float total = 0;

    while (1) {
        printf("Digite o produto vendido (B para batata, H para hamburguer, S para suco, C para combo, F para encerrar): ");
        scanf(" %c", &produto);  // O espaço antes de %c é para consumir qualquer caractere em branco deixado no buffer.

        // Condição de encerramento do programa
        if (produto == 'F') {
            break;
        }

        // Contabilizando a quantidade de itens vendidos
        switch (produto) {
            case 'B': // Batata
                batata++;
                total += 10.00;
                break;
            case 'H': // Hamburguer
                hamburguer++;
                total += 15.00;
                break;
            case 'S': // Suco
                suco++;
                total += 9.00;
                break;
            case 'C': // Combo
                combo++;
                total += 30.00;
                break;
            case '\n':
            case '\t':
     case '\r':
                break;
            default:
                printf("Produto não encontrado!\n");
                break;
        }
    }

    // Gerando o relatório
    printf("\nRelatório de vendas:\n");
    printf("Suco:       %d vendidos\n", suco);
    printf("Batata:     %d vendidas\n", batata);
    printf("Hamburguer: %d vendidos\n", hamburguer);
    printf("Combos:     %d vendidos\n", combo);
    printf("-----------------------\n");
    printf("Total:      %d itens\n", batata + hamburguer + suco + combo);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}
