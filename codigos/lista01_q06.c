#include <stdio.h>
#include <stdlib.h>

int main() {
  char *unidades[9] = {
    "UM",
    "DOIS",
    "TRÊS",
    "QUATRO",
    "CINCO",
    "SEIS",
    "SETE",
    "OITO",
    "NOVE"
  };
  char *dezenas[9] = {
    "DEZ",
    "VINTE",
    "TRINTA",
    "QUARENTA",
    "CINQUENTA",
    "SESSENTA",
    "SETENTA",
    "OITENTA",
    "NOVENTA"
  };
  char *diferentes[9] = {
    "ONZE",
    "DOZE",
    "TREZE",
    "QUATORZE",
    "QUINZE",
    "DEZESSEIS",
    "DEZESSETE",
    "DEZOITO",
    "DEZENOVE"
  };
  int n;

  while ((n < 1) || (n > 99)) {
    printf("Digite um número de 1 a 99 e aperte enter: ");
    scanf("%d", &n);
    if ((n < 1) || (n > 99))
      printf("Número inválido, tente novamente.\n");
  }

  if (n < 10) {
    printf("%s\n", unidades[n - 1]);
  } else if (n < 20) {
    printf("%s\n", diferentes[n - 11]);
  } else {
    int unidade = n % 10;
    int dezena = n / 10;

    if (unidade == 0) {
      printf("%s\n", dezenas[dezena - 1]);
    } else {
      printf("%s E %s\n", dezenas[dezena - 1], unidades[unidade - 1]);
    }
  }

  return 0;
}
