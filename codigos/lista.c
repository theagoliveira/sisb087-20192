#include <stdio.h>
#include <stdlib.h>

struct lista {
  int dados;
  struct lista* prox;
};

struct lista_dup {
  int dados;
  struct lista* prox;
  struct lista* ant;
};

typedef struct lista Lista;
typedef struct lista_dup Lista_dup;

Lista* cria_lista(void) {
  return NULL;
}

// Insere no início da lista
Lista* insere_lista(Lista* l, int v) {
  Lista* novo = (Lista *) malloc(sizeof(Lista));
  novo->dados = v;
  novo->prox = l;
  return novo;
}

Lista* insere_lista_ordenada(Lista* l, int v) {
  Lista* p = l;
  Lista* ant = NULL;
  Lista* novo = (Lista *) malloc(sizeof(Lista));
  novo->dados = v;

  while((p != NULL) && (p->dados < v)) {
    ant = p;
    p = p->prox;
  }

  if (ant == NULL) {
    novo->prox = l;
    l = novo;
  } else {
    novo->prox = ant->prox;
    ant->prox = novo;
  }

  return l;
}

void imprime_lista (Lista* l) {
  Lista* p;

  printf("Lista: ");

  for(p = l; p != NULL; p = p->prox) {
    printf("%d -> ", p->dados);
  }

  printf("NULL\n");
}

int lista_vazia(Lista* l) {
  return (l == NULL);
}

Lista* busca_lista(Lista* l, int v) {
  Lista* p;

  for(p = l; p != NULL; p = p->prox) {
    if (p->dados == v) {
      return p;
    }
  }

  return NULL;
}

Lista* remove_lista(Lista* l, int v) {
  Lista* p = l;
  Lista* ant = NULL;

  while((p != NULL) && (p->dados != v)) {
    ant = p;
    p = p->prox;
  }

  // Não achou
  if (p == NULL) {
    return l;
  }

  // Achou

  if (ant == NULL) {
    // Inicio da lista
    l = p->prox;
  } else {
    // Meio/fim da lista
    ant->prox = p->prox;
  }

  free(p);
  return l;
}

void libera_lista(Lista* l) {
  Lista* p = l;

  while(p != NULL) {
    Lista* t = p->prox;
    free(p);
    p = t;
  }
}

Lista* concatena(Lista* l1, Lista* l2) {
  Lista* p;

  for(p = l1; p->prox != NULL; p = p->prox);
  p->prox = l2;

  return l1;
}

void imprime_inversa_recursiva(Lista* l) {
  if (l == NULL) {
    return;
  } else {
    imprime_inversa_recursiva(l->prox);
    printf("%d ", l->dados);
  }
}

float media_lista(Lista* l) {
  Lista* p = l;
  int soma = 0;
  int contador = 0;

  for(p = l; p != NULL; p = p->prox) {
    soma += p->dados;
    contador++;
  }

  return (float) soma/contador;
}

int main() {
  Lista* lst;
  Lista* lst_2;
  Lista* elem;
  int num;

  lst = cria_lista();
  lst_2 = cria_lista();
  imprime_lista(lst);

  if (lista_vazia(lst)) {
    printf("A lista está vazia.\n");
  } else {
    printf("A lista não está vazia.\n");
  }

  for(num = 1; num <= 10; num++) {
    lst = insere_lista(lst, num * 10);
    lst_2 = insere_lista(lst_2, num * 100);
  }
  imprime_lista(lst);

  printf("Lista Recursiva: ");
  imprime_inversa_recursiva(lst);
  printf("\nMédia: %.2f\n", media_lista(lst));

  if (lista_vazia(lst)) {
    printf("A lista está vazia.\n");
  } else {
    printf("A lista não está vazia.\n");
  }

  lst = concatena(lst, lst_2);
  imprime_lista(lst);

  printf("Digite um número: ");
  scanf("%d", &num);
  elem = busca_lista(lst, num);
  if (elem != NULL) {
    printf("O elemento %d está na lista e o próximo valor é %d.\n", num, elem->prox->dados);
  } else {
    printf("O elemento %d não está na lista.\n", num);
  }

  lst = remove_lista(lst, 10);
  lst = remove_lista(lst, 30);
  lst = remove_lista(lst, 50);
  lst = remove_lista(lst, 70);
  lst = remove_lista(lst, 90);
  imprime_lista(lst);

  libera_lista(lst);

  lst = cria_lista();
  lst = insere_lista_ordenada(lst, 5);
  lst = insere_lista_ordenada(lst, 2);
  lst = insere_lista_ordenada(lst, 9);
  lst = insere_lista_ordenada(lst, 9);
  lst = insere_lista_ordenada(lst, 56);
  lst = insere_lista_ordenada(lst, -2);
  imprime_lista(lst);
  printf("Média: %.2f\n", media_lista(lst));

  return 0;
}
