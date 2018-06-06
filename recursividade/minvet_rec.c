#include <stdio.h>

int minvet(int v[], int n, int aux){
  if(n == 0){
    return aux;
  }

  if(v[n-1] < aux){
    aux = v[n-1];
  }
  return minvet(v, n-1, aux);


}
int main(int argc, char const *argv[]) {
  int n, i, aux;
  printf("Digite o tam do vetor: \n");
  scanf("%i",&n);
  int v[n];

  for(i = 0; i < n; i++){
    printf("Digite v[%i]: ",i);
    scanf("%i",&v[i]);
  }
  aux = v[0];

  printf("%i\n",minvet(v, n, aux));


  return 0;
}
