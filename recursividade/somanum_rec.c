#include <stdio.h>
int somaint_rec(int n){
  if(n == 1){
    return 1;
  }
  return n + somaint_rec(n-1);
}
int main(void){
  int n;
  printf("Digite n: ");
  scanf("%i",&n);
  printf("%i",somaint_rec(n));
    return 0;
}
