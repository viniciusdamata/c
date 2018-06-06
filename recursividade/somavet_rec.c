#include <stdio.h>
#include <stdlib.h>
int somavetrec(int vet[], int i){
  if(i == 0){
    return vet[i];
  }
  return vet[i] + somavetrec(vet,i-1);
}

 int main(void) {
  int vet[10] = {0};
  for (size_t i = 0; i < 10; i++) {
    vet[i] =(int) (rand() % 10);
    printf("%i\n",vet[i]);
  }
  printf("%i\n",somavetrec(vet, 10-1));

  return 0;
}
