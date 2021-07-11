#include <stdio.h>

int main() {
  char nome_1[50];
  char nome_2[50];
  FILE *arq_1;
  FILE *arq_2;
  char c;
  int d = 32;

  printf("Nome do arquivo 1: ");
  scanf("%s", nome_1);

  printf("Nome do arquivo 2: ");
  scanf("%s", nome_2);

  arq_1 = fopen(nome_1, "r");
  arq_2 = fopen(nome_2, "w");

  c = fgetc(arq_1);
  while(!feof(arq_1)) {
    if ((c >= 97) && (c <= 122)) {
      fputc(c - d, arq_2);
    } else {
      fputc(c, arq_2);
    }
    c = fgetc(arq_1);
  }

  fclose(arq_1);
  fclose(arq_2);

  return 0;
}
