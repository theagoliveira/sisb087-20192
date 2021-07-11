#include <stdio.h>

int main() {
  char nome[30];
  int telefone;
  FILE *arquivo = fopen("cadastros.txt", "w");

  while (1) {
    printf("Digite um nome: "); // leitura do nome
    scanf("%s", nome);
    printf("Digite um número de telefone: "); // leitura do telefone
    scanf("%d",&telefone);

    if (telefone==0)
      break;

    fprintf(arquivo,"Nome: %s; Telefone: %d\n", nome, telefone);
  }

  return 0;
}
