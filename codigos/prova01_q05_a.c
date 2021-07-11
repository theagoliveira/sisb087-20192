#include <stdio.h>

int funcao(int *b, int p) {
  if (p == 1)
    return b[0];
  else
    return b[p - 1] + funcao(b, p - 1);
}

int main() {
  int x;
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  x = funcao(a, 10);
  printf("O resultado é %d\n", x);
  return 0;
}
