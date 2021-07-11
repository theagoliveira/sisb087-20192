#include <stdio.h>

void funcao(int *b, int indice_inicial, int tamanho) {
  if (indice_inicial < tamanho) {
    funcao(b, indice_inicial + 1, tamanho);
    printf("%d  ", b[indice_inicial]);
  }
}

int main() {
  int a[10] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5};

  printf("Resposta:\n");
  funcao(a, 0, 10);
  printf("\n");

  return 0;
}
