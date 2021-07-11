#include <stdio.h>
#include <stdlib.h>

struct ferramenta {
  int numero_ferramenta;
  char nome_ferramenta[26];
};

typedef struct ferramenta Ferramenta;

int main() {
  Ferramenta a;
  Ferramenta b[10];
  Ferramenta *ptr;

  printf("Numero: ");
  scanf("%d", &a.numero_ferramenta);
  printf("\nNome: ");
  scanf("%s", a.nome_ferramenta);

  b[3] = a;
  ptr = b;

  printf("Numero: %d\n", ptr[3].numero_ferramenta);
  printf("Nome: %s\n", ptr[3].nome_ferramenta);

  printf("Numero: %d\n", (ptr + 3)->numero_ferramenta);
  printf("Nome: %s\n", (ptr + 3)->nome_ferramenta);

  return 0;
}
