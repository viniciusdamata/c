//exercicio 1
/*#include "stdio.h"
int paridade(int num) {
  if (num % 2 == 0) {
    return 1;
  }
  else{
  return 0;
}
}

 int main(void) {
  int num;

  printf("Digite num: ");
  scanf("%i",&num);

  if (paridade(num) == 1) {
  printf("O numero e par \n");
}
else {
  printf("o numero e impar\n");
}
}*/
#include <stdio.h>
#include <stdbool.h>
bool teste;
double soma(double num1, double num2) {
  return num1 + num2;
}
double subtracao(double num1, double num2) {
  return num1 - num2;

}
double multiplicacao(double num1, double num2) {
  return num1 * num2;
}
double divisao(double num1, double num2) {
  while (num2 == 0) {
    printf("Erro, divisao por 0 !\n tente novamente!\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf",&num1);
    printf("Digite o segundo numero: ");
    scanf("%lf",&num2);
  }
  return num1 / num2;

}

void menu(int opc, double num1, double num2){
while (opc != 6) {
  printf("Digite o primeiro numero:\n");
  scanf("%lf",&num1);
  printf("Digite o segundo numero:\n");
  scanf("%lf",&num2);
  switch (opc) {

    case 1:
        printf("Resultado da soma: %lf\n",soma(num1, num2));
    break;
    case 2:
        printf("Resultado da subtracao: %lf\n",subtracao(num1, num2));
    break;
    case 3:
        printf("Resultado da multiplicacao: %lf\n",multiplicacao(num1,num2));
    break;
    case 4:
        printf("Resultado da divisao: %lf\n",divisao(num1,num2));
    break;
    case 5:
        printf("Digite o primeiro numero:\n");
        scanf("%lf",&num1);
        printf("Digite o segundo numero:\n");
        scanf("%lf",&num2);

    break;
    default:
      printf("Opcao invalida ");
    break;


    }
    printf("#####################################################\n");
    printf("Digite a opcao desejada:\n 1.Adicao\n 2.Subtracao\n 3.Multiplicacao\n 4.Divisao\n 5.Entrada de dados\n 6.sair\n");
    printf("#####################################################\n");
    scanf("%i",&opc);
  }
}




int main(void) {
    int opc;
    double num1, num2;

    printf("#####################################################\n");
    printf("Digite a opcao desejada:\n 1.Adicao\n 2.Subtracao\n 3.Multiplicacao\n 4.Divisao\n 5.Sair\n");
    printf("#####################################################\n");
    scanf("%i",&opc);
    menu(opc, num1, num2);

}
