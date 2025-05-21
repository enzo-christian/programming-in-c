#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindromo(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        if (*inicio != *fim) {
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}
