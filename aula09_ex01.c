#include <stdio.h>

// Recebe um ponteiro sem modificar nada
void multi3(int *y);

int main(void) {
  int x = 5;
  printf("X antes: %d\n", x);

  // Passamos o endereço de x (usando &x).
  multi3(&x);
  printf("Resultado: %d\n", x);  // Aqui, x já foi modificado pela função

  printf("X depois: %d\n", x);
  return 0;
}

// Modificamos para que a função não retorne nada (void) e modifique o valor de x diretamente.
void multi3(int *y) {
  *y = 3 * (*y);  // Modifica o valor de x diretamente
}
