#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

/*implementação em linguagem c do algoritmo de
*listas duplamente encadeadas
*/

void inicializa_lista(lista *l){
  l->ultimo = NULL;
}

int lista_vazia(lista *l){
  return l->ultimo == NULL;
}

no *busca_lista(lista *l, int x){
   if(x == l->ultimo->info){
     return l->ultimo;
   }else{
     no *aux;
     aux = l->ultimo->prox;
     while(aux->prox != l->ultimo && aux->info != x){
       aux = aux->prox;
     }
     if(aux == l->ultimo){
       return NULL;
     }else{
       return aux;
     }
   }

}
void insere_fim(lista *l, int x){
  no *No;
  No = malloc(sizeof(no));

  if(No == NULL){
    printf("Overflow");
  }else if(lista_vazia(l)){
    No->prox = No;
    No->ant = No;
    l->ultimo = No;
  }else{
    No->info = x;
    No->prox = l->ultimo->prox;
    No->ant = l->ultimo;
    l->ultimo->prox = No;
    No->prox->ant = No;
  }
  l->ultimo = No;


}
void insere_inicio(lista *l, int x){
  no *No;
  No = malloc(sizeof(no));

  if(No == NULL){
    printf("Overflow");
  }else{
    No->info = x;
    if(lista_vazia(l)){
      No->prox = No;
      No->ant = No;
      l->ultimo = No;
    }else{
      No->prox = l->ultimo->prox;
      No->ant = l->ultimo;
      l->ultimo->prox = No;
      No->prox->ant = No;
    }
  }


}
void insere_ordenado(lista *l, int x){
  if(lista_vazia(l) || x <= l->ultimo->prox->info){
    insere_inicio(l, x);
  }else if(x >= l->ultimo->info){
    insere_fim(l, x);
  }else{
      no *aux, *No;
      No = malloc(sizeof(No));
      if(No == NULL){
        printf("Overflow!\n");
      }
      No->info = x;

      aux = l->ultimo->prox;
      while(aux->prox != l->ultimo && aux->prox->info <= x){
        aux = aux->prox;
      }
      No->ant = aux;
      No->prox = aux->prox;
      aux->prox = No;
      No->prox->ant = No;
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
    No->ant = No;
    No->prox = No;
  }
  return No;
}

void libera(lista *l){
  if(!lista_vazia){
    no *atual, *proxNo;
    atual = l->ultimo->prox;
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
  printf("%i\n",l->ultimo->info);
  insere_fim(l, 5);
  printf("%i\n",l->ultimo->info);
  free(l);



}
