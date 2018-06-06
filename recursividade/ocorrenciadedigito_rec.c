#include <stdio.h>
int ocorredigito(int n, int k, int cont){
      if(n <= 9 && n == k){
        return cont+1;
      }
      else if(k == n%10){
        return ocorredigito(n/10, k, cont+1);
      }
      return cont;

}


int main(void) {
    int n, k, cont = 0;
    printf("Digite n: \n");
    scanf("%i",&n);
    printf("Digite k: \n");
    scanf("%i",&k);
    printf("%i\n",ocorredigito(n, k, cont)) ;
    return 0;
}
