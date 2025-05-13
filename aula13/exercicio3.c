#include <stdio.h>
#include <string.h>

void ordenar(char str[]) {
int tamanho = strlen(str);
char temp;

for (int j = 0; j < tamanho; j++) {
for (int i = 0; i < tamanho - 1; i++) {
if (str[i] > str[i + 1]) {
        
temp = str[i];
str[i] = str[i + 1];
str[i + 1] = temp;
}
}
}
}

int main() {
char palavra1[100], palavra2[100];

printf("Digite a primeira palavra: ");
scanf("%s", palavra1);

printf("Digite a segunda palavra: ");
scanf("%s", palavra2);

ordenar(palavra1);
ordenar(palavra2);

if (strcmp(palavra1, palavra2) == 0) {
printf("Sao anagramas!\n");
} else {
printf("Nao sao anagramas.\n");
}

    return 0;
}
