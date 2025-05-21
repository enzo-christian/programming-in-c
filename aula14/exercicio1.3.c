#include <stdio.h>

float calcular_tempo_queda(float altura);
float calcular_distancia_liberacao(float velocidade, float altura);

int main() {
    float altura, velocidade;

    //solicita ao usuário a altura e a velocidade
    printf("Informe a altura do avião (em metros): ");
    scanf("%f", &altura);

    printf("Informe a velocidade do avião (em m/s): ");
    scanf("%f", &velocidade);

    //calcula o tempo de queda e a distância de liberação
    float tempo = calcular_tempo_queda(altura);
    float distancia = calcular_distancia_liberacao(velocidade, altura);

    printf("Tempo de queda: %.2f segundos\n", tempo);
    printf("Distância de liberação: %.2f metros\n", distancia);

    return 0;
}
