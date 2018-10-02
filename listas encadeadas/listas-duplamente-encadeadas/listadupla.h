#ifndef listadupla_h
#define listasdupla_h

typedef struct no no;

struct no{
  int info;
  no *prox;
  no *ant;
};


typedef struct{
  no *primeiro;
  no *ultimo;
}lista;



  int lista_vazia(lista *l);
  void inicializa_lista(lista *l);
  void insere_fim(lista *l, int x);
  void insere_inicio(lista *l, int x);
  void insere_ordenado(lista *l, int x);
  no *remove_lista(lista *l, int x);
  no *busca_lista(lista *l, int x);


#endif
