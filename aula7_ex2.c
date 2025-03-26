#include <stdio.h>

int main(void) {
    char opcao;
    
    // Loop até o usuário digitar a tecla 'F' para encerrar
    while (1) {
        printf("Escolha a opção para a máquina de lavar-roupas:\n");
        printf("S - Secar\n");
        printf("E - Enxaguar e Secar\n");
        printf("L - Lavar, Enxaguar e Secar\n");
        printf("F - Para finalizar\n");
        printf("Digite a opção desejada: ");
        
        opcao = getchar();  // Recebe a entrada do usuário
        
        // Limpa o buffer do stdin para evitar problemas com o getchar() seguinte
        while (getchar() != '\n');

        if (opcao == 'F') {
            break;  // Finaliza o loop caso a tecla 'F' seja digitada
        }

        // Processa a opção recebida com switch
        switch (opcao) {
            case 'S':
                printf("Opção escolhida: Secar\n");
                break;
            case 'E':
                printf("Opção escolhida: Enxaguar e Secar\n");
                break;
            case 'L':
                printf("Opção escolhida: Lavar, Enxaguar e Secar\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
