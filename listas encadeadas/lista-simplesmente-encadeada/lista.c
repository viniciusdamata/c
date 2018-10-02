#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


void inicializa_lista(lista *l){
  l->primeiro = NULL;
  l->ultimo = NULL;
}

int lista_vazia(lista *l){
  return l->ultimo == NULL;
}

void insere_inicio(lista *l, int x){
  no *No;

  No = malloc(sizeof(no));

  if(No == NULL){
    printf("Overflow ! \n");
  }else{
    No->info = x;
    No->prox = l->primeiro;
    l->primeiro = No;
    if(lista_vazia(l)){
      l->ultimo = No;
    }

  }
}

void insere_fim(lista *l, int x){
  no *No;
  No = malloc(sizeof(no));

  if(No == NULL){
    printf("Overflow!\n");
  }else{
    No->info = x;
    No->prox = NULL;
    if(!lista_vazia(l)){
      l->ultimo->prox = No;
    }else{
      l->primeiro = No;
    }
    l->ultimo = No;

  }

}

void insere_ordenado(lista *l, int x){
  if(lista_vazia(l) || x <= l->primeiro->info){
    insere_inicio(l, x);
  }else if(x >= l->ultimo->info){
    insere_fim(l, x);
  }else{
    no *No;
    no *aux;

    No = malloc(sizeof(no));
    if(No == NULL){
      printf("Overflow\n");
    }else{
      No->info = x;
      aux = l->primeiro;
      while(aux->prox->info < No->info){
        aux = aux->prox;
      }
      No->prox = aux->prox;
      aux->prox = No;
    }

  }
}
no *remove_lista(lista*l, int x){
  no *No = NULL;

  if(lista_vazia(l)){
    printf("Underflow!\n");
  }else{
    if(x == l->primeiro->info){
      No = l->primeiro;
      if(l->primeiro == l->ultimo){
        inicializa_lista(l);
      }else{
        l->primeiro = No->prox;
        No->prox = NULL;
      }
    }else{
      no *aux = l->primeiro;

      while (aux->prox != NULL && aux->prox->info != x) {
        aux = aux->prox;
      }
      if(aux->prox != NULL){
        No = aux->prox;
        aux->prox = No->prox;
        No->prox = NULL;
        if(No == l->  ultimo){
          l->ultimo = aux;
        }

      }else{
        printf("Elemento nao encontrado\n");
      }


    }
  }
  return No;
}
no *busca_lista(lista *l, int x){
  no *No;
  No = l->primeiro;
  while(No != NULL && No->info != x){
    No = No->prox;
  }
  return No;
}

void libera(lista *l){
  if(!lista_vazia){
    no *atual, *proxNo;
    atual = l->primeiro;
    while(atual != NULL){
      proxNo = atual->prox;
      free(atual);
      atual = proxNo;
    }
  }
}

int main(int argc, char const *argv[]) {
  lista *l = malloc(sizeof(lista));
  inicializa_lista(l);
  insere_inicio(l, 10);
  printf("%i\n", l->primeiro->info);
  insere_inicio(l, 5);
  printf("%i\n", l->primeiro->info);
  return 0;
}
