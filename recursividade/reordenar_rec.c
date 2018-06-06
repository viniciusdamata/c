#include <stdio.h>
#include <stdlib.h>
void reordenar(int v[], int i, int j){
    int aux = 0;

      if(v[j] > v[i]){
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
        reordenar(v, i-1, j);
      }
      else if(j > 0){
      reordenar(v, i, j-1);
      }
      reordenar(v, i-1, j);
}
int main(void) {
  int vet[10] = {0};
    for (size_t i = 0; i < sizeof vet / sizeof (int); i++) {
      vet[i] =(int) (rand() % 10);
      printf("%i ",vet[i]);
    }
    reordenar(vet, 9, 9);
    printf("\n\n");
    printf("Vetor reordenado: \n");
    for (size_t i = 0; i < sizeof vet / sizeof (int); i++) {
      printf("%i ",vet[i]);
    }
    printf("\n");
  return 0;
}
