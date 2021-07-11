#include <stdio.h> // Biblioteca para funções de leitura e escrita

int main() {
  int numero; // Numero inteiro positivo entre 0 e 255
  int indice = 7;
  char binario[9] = "00000000"; // De "00000000" a "11111111" + '\0'
  FILE *arquivo; // Ponteiro para arquivo

  arquivo = fopen("numeros_binarios.txt", "w"); // Abrir arquivo

  while(1) {
    // Ler o número do teclado
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Condição de parada
    if (numero < 0)
      break;

    // Resetando as variáveis 'binario' e 'indice' para os valores iniciais
    indice = 7;
    for(int i = 0; i < 8; i++)
      binario[i] = '0';

    // Código para converter para binário
    while(numero != 1) {
      binario[indice] = (numero % 2) + 48;
      numero /= 2; // numero = numero / 2
      indice--; // indice = indice - 1
    }
    binario[indice] = (numero % 2) + 48;

    // Salvando número binário no arquivo-texto
    fputs(binario, arquivo);
    fputc('\n', arquivo);
  }

  fclose(arquivo);

  return 0;
}
