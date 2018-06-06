#include <stdio.h>

int maxvet(int v[], int i){
  if(i == 0){
    return v[i];
  }
  if(v[i] < v[i-1]){
    return v[i];
  }

}
int main(int argc, char const *argv[]) {
  int n, i;
  printf("Digite o tam do vetor: \n");
  scanf("%i",&n);
  int v[n];

  for(i = 0; i < n; i++){
    printf("Digite v[%i]: ",i);
    scanf("%i",&v[i]);
  }


  printf("%i\n",maxvet(v, i));


  return 0;
}
