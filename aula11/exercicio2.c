#include <stdio.h>
#define PI 3.14159

int main() {
    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    printf("Área: %.2lf\n", PI * raio * raio);
    return 0;
}
