#include <stdio.h>

int main() {
    char nome[] = "Fulano";

    printf("Nome: %s\n", nome);

    for (int i = 0; nome[i] != '\0'; i++) {
        printf("* %c ", nome[i]);
    }
    printf("*\n");

    return 0;
}
