#include <stdio.h>

int main() {
    int vetor[5] = {9, 7, 3, 6, 8};
    int temp;


    for (int j = 0; j < 5; j++) {
    for (int i = 0; i < 4; i++) {
    if (vetor[i] > vetor[i + 1]) {
                
    temp = vetor[i];
    vetor[i] = vetor[i + 1];
    vetor[i + 1] = temp;
}
}
}

    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);
}

    return 0;
}
