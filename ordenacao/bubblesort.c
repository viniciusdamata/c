#include <stdio.h>

void bubble_sort(int v[], int tam){
  int aux = 0, continua = 0;


  for(int i = tam-1; i >= 0; i--){
    continua = 0;
    for(int j = 0; j < i; j++){
      if(v[j] > v[j+1]){
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
        continua = 1;
      }
    }
    if(continua == 0){
      i = -1;
    }
  }
}
int main(void) {
  int v[10] = {0,6,8,9,1,2,4,5,3,7};

  bubble_sort(v, 10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i\n",v[i]);
  }
  return 0;
}
