#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

/*implementação em linguagem c do algoritmo de
*listas simplesmente encadeadas circulares
*/

void inicializa_lista(lista *l){
  l->ultimo = NULL;
}

int lista_vazia(lista *l){
  return l->ultimo == NULL;
}

no *busca_lista(lista *l, int x){
  if(lista_vazia(l)){
    return NULL;
  }else if(x == l->ultimo->info){
    return l->ultimo;
  }else{
    no *aux;
    aux = l->ultimo->prox;
    while(aux->info != x && aux != l->ultimo){
      aux = aux->prox;
    }
    if(aux == l->ultimo){
      return NULL;
    }else{
      return aux;
    }
  }

}

void insere_inicio(lista *l, int x){
  no *No;
  No = malloc(sizeof(no));

  if(No == NULL){
    printf("Overflow!\n");
  }else{
    No->info = x;
    if(lista_vazia(l)){
      No->prox = No;
      l->ultimo = No;
    }else{
      No->prox = l->ultimo->prox;
      l->ultimo->prox = No;
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
    if(lista_vazia(l)){
      No->prox = No;
      l->ultimo = No;
    }else{
      No->prox = l->ultimo->prox;
      l->ultimo->prox = No;
    }
    l->ultimo = No;
  }
}

void insere_ordenado(lista *l, int x){
  if(x <= l->ultimo->prox->info || lista_vazia(l)){
    insere_inicio(l, x);
  }else if(x >= l->ultimo->info){
    insere_fim(l, x);
  }else{
      no *No, *aux;
      No = malloc(sizeof(no));

      if(No == NULL){
        printf("Overflow! \n");
      }else{
        No->info = x;
        aux = l->ultimo->prox;

        while(aux != l->ultimo && aux->prox->info <= x)
          aux = aux->prox;
        }
        No = aux->prox;
        aux->prox = No;


  }

}
no *remove_lista(lista *l, int x){
    if(lista_vazia(l)){
      printf("Underflow");
    }else{
      no *No, *aux;

      aux = l->ultimo;

      while(aux->prox != l->ultimo && aux->prox->info != x){
        aux = aux->prox;
      }
      if(aux->prox->info == x){
        No = aux->prox;
        if(No->prox == No){
          inicializa_lista(l);
        }else{
          aux->prox = No->prox;
          No->prox = NULL;
          if(l->ultimo == No){
            l->ultimo = aux;
          }
        }
      }
    }

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
  printf("%i\n",l->ultimo->prox->info);
  insere_fim(l, 5);
  printf("%i\n",l->ultimo->info);
  free(l);


}
