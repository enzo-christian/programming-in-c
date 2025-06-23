#include <stdio.h>

int main() {
    double notas[4];
    double total = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%lf", &notas[i]);
        total += notas[i];
    }

    printf("Total: %.2lf\n", total);
    return 0;
}
