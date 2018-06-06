#include <stdio.h>
void imprimedecrescente(int n){
    printf("Impressao decrescente: %i\n",n);
    if(n > 0){
      imprimedecrescente(n-1);
    }
}
void imprimecrescente(int n){

    if(n > 0){
    imprimecrescente(n-1);
    }
    printf("Impressao crescente: %i\n",n);
}

int main(){
  int n;
  printf("Digite n: ");
  scanf("%i",&n);

  printf("Impressao decrescente: \n");
  imprimedecrescente(n);
  printf("Impressao crescente: \n");
  imprimecrescente(n);

}
