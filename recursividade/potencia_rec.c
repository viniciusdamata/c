#include <stdio.h>
int potencia_rec(int n, int k){
  if (k == 1){
    return n;
  }
  return n * potencia_rec(n, k-1);
}
int main(void) {
  int n, k;
  printf("Digite n: \n");
  scanf("%i",&n);
  printf("Digite k: \n");
  scanf("%i",&k);
  printf("%i\n",potencia_rec(n, k));

  return 0;
}
