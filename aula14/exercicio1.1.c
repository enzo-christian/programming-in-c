#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura) {
    const float gravidade = 9.81; //gravidade
    float tempo = sqrt((2 * altura) / gravidade); //formula para calculo do tempo
    return tempo;
}
