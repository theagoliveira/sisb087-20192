#include <stdlib.h>
#include <stdio.h>

void string_invertida(char *str) {
  int aux;

  if (*str == '\0') {
    return;
  } else {
    string_invertida(str + 1);
    printf("%c", *str);
  }
}

int main() {
  string_invertida("thiago");
  printf("\n");
}
