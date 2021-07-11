#include <stdio.h>
#include <stdlib.h>


struct cliente {
  char nome[15];
  char sobrenome[15];
  int numCliente;

  struct {
    char telefone[11];
    char endereco[50];
    char cidade[25];
    char estado[2];
    char cep[8];
   } pessoal;
};

int main() {

  struct cliente *ptrCliente;
  struct cliente regCliente = {
    "Nome",
    "Sobrenome",
    123,
    {
      "8299999999",
      "Rua",
      "Cidade",
      "E",
      "123456"
    }
  };

  ptrCliente = &regCliente;

  // (a)
  printf("%s", regCliente.sobrenome);

  return 0;
}
