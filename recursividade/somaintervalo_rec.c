#include <stdio.h>

int somaintervalo(int n1, int n2){
  if(n1 == n2){
    return n2;
  }
  return n1 + somaintervalo(n1+1, n2);
}
int main(int argc, char const *argv[]) {
  int n1, n2;

  printf("Digite n1: \n");
  scanf("%i",&n1);
  printf("Digite n2: \n");
  scanf("%i",&n2);
  printf("%i\n",somaintervalo(n1, n2));
  return 0;
}
