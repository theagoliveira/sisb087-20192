#include <stdlib.h>
#include <stdio.h>

int pesquisa_linear(int *array, int tam, int val) {
  int aux;

  if (tam == 1) {
    if (array[0] == val) {
      return 0;
    } else {
      return -1;
    }
  } else {
    if (array[0] == val) {
      return 0;
    } else {
      aux = 1 + pesquisa_linear(&array[1], tam - 1, val);
      if (aux == 0) {
        return -1;
      } else {
        return aux;
      }
    }
  }
}

int main() {
  int v[5] = {1, 3, 2, 5, 4};
  int n = 4;

  printf("Índice: %d\n", pesquisa_linear(v, 5, n));
}
