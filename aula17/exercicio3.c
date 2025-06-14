#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    printf("Content-type: text/html\n\n");

    char *dados = getenv("QUERY_STRING");
    char *posicao = strchr(dados, '=');
    char *anoStr = posicao + 1;
    int anoDigitado = atoi(anoStr);
    time_t tempo = time(NULL);
    struct tm *data = localtime(&tempo);
    int anoAtual = data->tm_year + 1900;
    int diferenca = anoAtual - anoDigitado;

    printf("<html><body>");
    printf("<p>Já se passaram %d anos desde %d.</p>", diferenca, anoDigitado);
    printf("</body></html>");

    return 0;
}
