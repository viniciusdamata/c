#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

/*implementação em linguagem c do algoritmo de
*listas duplamente encadeadas
*/

void inicializa_lista(lista *l){
  l->primeiro = NULL;
  l->ultimo = NULL;
}

int lista_vazia(lista *l){
  return l->ultimo == NULL;
}

no *busca_lista(lista *l, int x){
   no *No;
   No = l->primeiro;
   while(No != NULL && No->info != x){
     No = No->prox;
   }
   return No;
}
void insere_fim(lista *l, int x){
  no *No;
  No = malloc(sizeof(no));
  if(No == NULL){
    printf("Overflow!\n ");
  }else{
    No->info = x;
    No->prox = NULL;
    No->ant = l->ultimo;
    if(lista_vazia(l)){
      l->primeiro = No;
    }else{
      l->ultimo->ant = No;
    }
    l->ultimo = No;
  }

}
void insere_inicio(lista *l, int x){
  no *No;
  No = malloc(sizeof(no));
  if(No == NULL){
    printf("Overflow!\n ");
  }else{
    No->info = x;
    No->ant = NULL;
    No->prox = l->primeiro;
    if(lista_vazia(l)){
      l->ultimo = No;
    }else{
        l->primeiro->ant = No;
    }
    l->primeiro = No;
  }

}
void insere_ordenado(lista *l, int x){
  if(lista_vazia(l) || x <= l->primeiro->info){
    insere_inicio(l, x);
  }else if(x >= l->ultimo->info){
    insere_fim(l, x);
  }else{
    no *No, *aux;
    No = malloc(sizeof(no));
    if(No == NULL){
      printf("Overflow!\n");
    }else{
      No->info = x;
      aux = l->primeiro;

      while (aux->prox->info < x) {
        aux = aux->prox;
      }
      No->ant = aux;
      No->prox = aux->prox;
      aux->prox = No;
      No->prox->ant = No;

    }

  }

}
no *remove_lista(lista *l, int x){
  no *No;
  No = busca_lista(l, x);

  if(No == NULL){
    printf("Elemento nao encontrado! ");
  }else{
    No->prox->ant = No->ant;
    No->ant->prox = No->prox;
    No->ant = NULL;
    No->prox = NULL;
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
  printf("%i\n",l->primeiro->info);
  insere_fim(l, 5);
  printf("%i\n",l->ultimo->info);
  free(l);


}
