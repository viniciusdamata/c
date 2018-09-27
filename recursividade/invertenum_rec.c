#include <stdio.h>
int invertenum(int n){
/*inverter numeros recursivo*/
  if (n >= 10) {

    printf("%i",n%10);

    n /= 10;
    return invertenum(n);
  }
  printf("%i\n",(n%10));

}
int main(void){
  int n;
  printf("Digite num: \n");
  scanf("%i",&n);
  invertenum(n);

  return 0;
}
