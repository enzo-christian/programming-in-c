#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Content-type: text/html\n\n");

    char *dados = getenv("QUERY_STRING");

    printf("<html><body>");
    printf("<p>Recebido: %s</p>", dados);
    printf("</body></html>");

    return 0;
}
