#include <stdio.h>
#define PI 3.14159

int main(void) {
    double raio;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    printf("Diâmetro: %.2lf\n", 2 * raio);
    printf("Circunferência: %.2lf\n", 2 * PI * raio);
    printf("Área: %.2lf\n", PI * raio * raio);

    return 0;
}
