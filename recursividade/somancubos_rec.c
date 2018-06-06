#include "stdio.h"

int somacubos(int n){
  if(n <= 1) {
    return n;
  }
  return (n*n*n) + somacubos(n-1);

}
int main(int argc, char const *argv[]) {
  int n;
  printf("Digite n: \n");
  scanf("%i",&n);
  printf("Soma: %i \n",somacubos(n));

}
