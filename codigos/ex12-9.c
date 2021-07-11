#include <stdio.h>

char vogais[] = {
  'a', 'e', 'i', 'o', 'u',
  'A', 'E', 'I', 'O', 'U'
};

int conta_vogais(char *nome_arquivo) {
  int contador = 0;
  int i, j;

  for(i = 0; nome_arquivo[i] != '\0'; i++)
    for(j = 0; j < 10; j++)
      if(nome_arquivo[i] == vogais[j]) {
        contador++;
        break;
      }

  return contador;
}

int main() {
  char nome[100];

  printf("Digite o nome do arquivo: ");
  scanf("%s", nome);

  printf("Quantidade de vogais: %d\n", conta_vogais(nome));

  return 0;
}
