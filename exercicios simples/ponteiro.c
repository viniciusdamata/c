#include <stdio.h>
#include <stdlib.h>
struct no {
  int info;
  struct no *prox;
};
typedef struct no node;
// node *novono(){
//   node *novo
//   novo = malloc(sizeof(node));
//   novo->prox = null;
//   return novo;
// }

int main(void) {
  int num = 35;
  int *ptr;
  ptr = &num;
  int v[num];



  printf("%i\n",*ptr);
  return 0;
}
