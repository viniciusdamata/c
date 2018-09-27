#include <stdio.h>
#include <math.h>
  int calculaDelta(int a, int b, int c) {
    return (b*b)-(4 * a * c);

  }
  void calculaX(int delta, int a, int b){
      delta = sqrt(delta);
      printf("raiz%i\n",delta );
      printf("X1: %i\n", ((b*-1)+delta)/2*a);
      printf("X2: %i\n", (-b-delta)/2*a);
  }
  int main(void) {
    int a = 0, b = 0, c = 0;
    printf("Digite A\n");
    scanf("%i",&a);
    printf("Digite B\n");
    scanf("%i",&b);
    printf("Digite C\n");
    scanf("%i",&c);

    printf("Sua equacao e %ix² + %ix + %i\n",a,b,c );
    calculaX(calculaDelta(a, b, c), b ,c);

  return 0;
}
