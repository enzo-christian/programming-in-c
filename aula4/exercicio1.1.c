#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9 && nota <= 10) {
        puts("Conceito: A");
    } else {
    if (nota >= 8 && nota < 9) {
        puts("Conceito: B");
} else {
    if (nota >= 7 && nota < 8) {
    puts("Conceito: C");
} else {
    if (nota >= 6 && nota < 7) {
    puts("Conceito: D");
} else {
    if (nota >= 0 && nota < 6) {
    puts("Conceito: F");
    } else {
    puts("Nota inválida");
    }
    }
    }
}
}

    return 0;
}
