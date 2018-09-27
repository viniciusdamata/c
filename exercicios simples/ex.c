#include <stdio.h>
#include <math.h>
char continuar(){
  char a ;
  printf("continuar s ou n?\n");
  scanf("%c",&a);
  if (a == 's'){
    return a;
  }
  else if (a == 'n'){
    return a;
  }
  else   {
    printf("Caractere invalido por favor apenas s(sim) ou n(não)\n");
    continuar();
  }
}
int main(void) {
  float num;
  char cont;
  printf("Digite num: \n");
  scanf("%f",&num);
  cont = 's';
  while (cont != 'n') {
    printf("%f\n",pow(num,3));
    cont = continuar();
    printf("Digite num: \n");
    scanf("%f",&num);
  }


  }
