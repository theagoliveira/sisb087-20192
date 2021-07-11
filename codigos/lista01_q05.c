#include <stdio.h>
#include <stdlib.h>

int main() {
  int dia, mes, ano;
  char *meses[12] = {
    "janeiro",
    "fevereiro",
    "março",
    "abril",
    "maio",
    "junho",
    "julho",
    "agosto",
    "setembro",
    "outubro",
    "novembro",
    "dezembro"
  };
  int mes_numero;

  printf("Digite uma data no formato DD/MM/AAAA: ");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  printf("%d de %s de %d\n", dia, meses[mes - 1], ano);

  return 0;
}
