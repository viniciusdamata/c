#include <stdio.h>
#include <stdlib.h>

void merge(int v[], int ini, int fim, int meio){
  int n1, n2, i, j;

  n1 = meio-ini+1;
  n2 = fim-meio;

  int esq[n1];
  int dir[n2];

  for (i = 0; i < n1-1; i++) {
    esq[i] = v[ini+i];
  }
  for (j = 0; j < n1-1; j++) {
    dir[j] = v[meio+j+1];
  }
  i = 0;
  j = 0;
  for (size_t k = ini; k <= fim; k++) {
    if(esq[i] <= dir[j]){
      v[k] = esq[i];
      i++;
    }
    else{
      v[k] = dir[j];
      j++;
    }
  }
}

void merge_sort(int v[], int ini, int fim){
  int meio;
  if(ini < fim){
    meio = (ini+fim)/2;
    merge_sort(v, ini, meio); //esquerda
    merge_sort(v, meio+1, fim);//direita
    merge(v, ini, meio, fim);
  }
}


int main(void) {
  int v[] ={0,6,2,1,5,4,3};
  merge_sort(v, 0, 6);

  for (size_t i = 0; i < 6; i++) {
    printf("%i\n",v[i]);
  }


  return 0;
}
