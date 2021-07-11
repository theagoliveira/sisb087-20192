#include <stdio.h>

int main() {
  char nome_1[50];
  char nome_2[50];
  char nome_3[50];
  FILE *arq_1;
  FILE *arq_2;
  FILE *arq_3;
  char c;

  printf("Nome do arquivo 1: ");
  scanf("%s", nome_1);

  printf("Nome do arquivo 2: ");
  scanf("%s", nome_2);

  printf("Nome do arquivo 3: ");
  scanf("%s", nome_3);

  arq_1 = fopen(nome_1, "r");
  arq_2 = fopen(nome_2, "r");
  arq_3 = fopen(nome_3, "w");

  c = fgetc(arq_1);
  while(!feof(arq_1)) {
    fputc(c, arq_3);
    c = fgetc(arq_1);
  }

  c = fgetc(arq_2);
  while(!feof(arq_2)) {
    fputc(c, arq_3);
    c = fgetc(arq_2);
  }

  fclose(arq_1);
  fclose(arq_2);
  fclose(arq_3);

  return 0;
}
