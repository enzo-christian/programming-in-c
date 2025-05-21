#include <stdio.h>
#include <math.h>

float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo = calcular_tempo_queda(altura); //calcular o tempo
    return velocidade * tempo; //distancia
}

