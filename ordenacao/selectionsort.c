#include <stdio.h>
void selection_sort(int v[], int tam){
  int i, j, menor, aux;
  for(i = 0; i < tam-1; i++){
    menor = i;
    for(j = i+1; j < tam; j++){
      if(v[j] < v[menor]){
        menor = j;
      }
    }
    if(menor != i){
      aux = v[i];
      v[i] = v[menor];
      v[menor] = aux;
    }
  }
}
int main(void) {
  
  int v[10] = {0,6,8,9,1,2,4,5,3,7};
  selection_sort(v, 10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i\n",v[i]);
  }
  return 0;
}
