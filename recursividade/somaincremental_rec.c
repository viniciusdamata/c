#include <stdio.h>
int somaincremental(int n1, int n2){
  if(n2 == 0){
    return n1;
  }
  n1++;
  return somaincremental(n1,n2-1);
}
int main(int argc, char const *argv[]) {
  int n1, n2;
  printf("Digite n1: \n");
  scanf("%i",&n1);
  printf("Digite n2: \n");
  scanf("%i",&n2);
  printf("%i\n",somaincremental(n1, n2));
  return 0;
}
