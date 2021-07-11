#include <stdio.h>

int main() {
  char nome[50];
  char palavra[50];
  FILE *arq;
  char c;
  int i;
  int num_palavra = 0;

  printf("Nome do arquivo: ");
  scanf("%s", nome);

  printf("Palavra: ");
  scanf("%s", palavra);

  arq = fopen(nome, "r");

  c = fgetc(arq);
  while(!feof(arq)) {
    i = 0;

    while((palavra[i] != '\0') && (c == palavra[i])) {
      i++;
      c = fgetc(arq);
    }

    if (palavra[i] == '\0')
      num_palavra++;

    c = fgetc(arq);
  }

  printf("Numero de vezes: %d", num_palavra);

  fclose(arq);

  return 0;
}
