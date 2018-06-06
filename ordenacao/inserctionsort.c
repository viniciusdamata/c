#include <stdio.h>
void insertion_sort(int v[], int tam){
  int aux, i, j;
  for(i = 1; i < tam; i++){
    aux = v[i];
    j = i;
    while (j > 0 && aux < v[j-1]) {
      v[j] = v[j-1];
      v[j-1] = aux;
      j--;
    }
  }
}
int main(void) {
  int v[10] = {0,6,8,9,1,2,4,5,3,7};
  insertion_sort(v, 10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i\n",v[i]);
  }
  return 0;
}
