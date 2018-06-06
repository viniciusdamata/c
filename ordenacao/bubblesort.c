#include <stdio.h>
void bubble_sort(int v[], int tam){
  int aux = 0, fim, continua;

  fim = tam;
  do {
    continua = 0;
    for(int i = 0; i < fim-1; i++){
      if(v[i] > v[i+1]){
        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        continua = i;
      }
    }
    fim--;
  } while(continua != 0);

}
int main(void) {
  int v[10] = {0,6,8,9,1,2,4,5,3,7};

  bubble_sort(v, 10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i\n",v[i]);
  }
  return 0;
}
