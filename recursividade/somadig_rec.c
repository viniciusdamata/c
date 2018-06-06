#include "stdio.h"

int somadig(int n) {
  if(n < 10) {
    return n;
  }
  return n % 10 + somadig(n/10);
}
int main(int argc, char const *argv[]) {
  int n;
  printf("Digite n: \n");
  scanf("%i",&n);
  printf("%i\n",somadig(n));
  return 0;
}
