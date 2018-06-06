/*informa o enesimo termo de uma pa*/

#include <stdio.h>
int ntermo_rec(int n, int k, int r){
  if(n == 0) {
    return k;
  }
  return ntermo_rec(n-1, k+r, r);

}
int main(int argc, char const *argv[]) {
  int n, k, r;
  k = 0;
  printf("Digite o enesimo termo:\n");
  scanf("%i",&n);
  printf("Digite a razao:\n");
  scanf("%i",&r);

  printf("%i \n",ntermo_rec(n, k , r));

  

  return 0;
}
