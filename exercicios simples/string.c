/*String ponteiro*/

#include <stdio.h>
int main(void) {
  char nome[100];
  char *string;
  string = nome;
  printf("Nome: \n");
  scanf("%s",string);
  printf("%s\n",string);
  return 0;
}
