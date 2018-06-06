#include <stdio.h>

int main (){
  char num[100];
  int cont = 0, i, aux;

  printf("Digite num\n");
  scanf("%s",num);
       while (num[cont] != '\0') {
         cont++;
       }
       for (i = cont; i >= 0; i--) {
            printf("%c",num[i]);
       }








}
