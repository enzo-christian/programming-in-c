#include <stdio.h>

void inicio() {
    printf("<html>\n");
    printf("  <head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
}

void meio() {
    printf("  </head>\n");
    printf("  <body>\n");
}

void fim() {
    printf("  </body>\n");
    printf("</html>\n");
}

void aba(char texto[]) {
    printf("    <title>%s</title>\n", texto);
}

void titulo(char texto[]) {
    printf("    <h1>%s</h1>\n", texto);
}

int main() {
    printf("Content-type: text/html\n\n");
    inicio();
    aba("Segunda página");
    meio();
    titulo("Usando argumentos");
    fim();
    return 0;
}
