#include <stdio.h>
#include <stdlib.h>
void invertvet_rec(float v[], int prim, int ult){
  int aux = 0;
  if(prim < ult){
    aux = v[prim];
    v[prim] = v[ult];
    v[ult] = aux;
    invertvet_rec(v,prim+1,ult-1);
  }
}
int main(void) {
  float v[10] = {0};

  for (size_t i = 0; i < 10; i++) {
      v[i] = rand() % 10;
      printf("v[%lu]%f\n",i,v[i]);
  }
  invertvet_rec(v,0,9);
  printf("Vetor invertido: \n");
  for (size_t i = 0; i < 10; i++) {
      printf("v[%lu]%f\n",i,v[i]);
  }

  return 0;
}
