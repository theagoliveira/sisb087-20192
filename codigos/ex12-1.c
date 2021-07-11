#include <stdio.h>

int main() {
  char nome[50];
  int num_linhas = 1;
  FILE *arq;
  char c;

  printf("Nome do arquivo: ");
  scanf("%s", nome);

  arq = fopen(nome, "r");

  c = fgetc(arq);
  while(!feof(arq)) {
    if (c == '\n') {
      num_linhas++;
    }

    c = fgetc(arq);
  }

  printf("Numero de linhas: %d", num_linhas);
  fclose(arq);

  return 0;
}
