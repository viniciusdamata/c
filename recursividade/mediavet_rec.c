#include <stdio.h>
float mediavet_rec(int n, int i, float vet[]){
    if(i == 0) {
      return vet[0]/n;
    }
      return vet[i]/n + mediavet_rec(n, i-1, vet);



}

int main(void) {
  int n, i;
  printf("Digite o tamanho do vetor: \n");
  scanf("%i",&n);
  i = n;
  float vet[n];
  for (size_t i = 0; i < n; i++) {
    printf("Digite num: \n");
    scanf("%f",&vet[i]);

  }

  printf("%f\n",mediavet_rec(n, i, vet));


  return 0;
}
