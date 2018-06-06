#include <stdio.h>
void lermatriz_rec(int m[][], int i, int j, int tam){
  if(j < tam){
    printf("Digite m[%i][%i]\n",i,j);
    scanf("%i",&m[i][j]);
    lermatriz_rec(*m, i, j+1, tam);
  }
  else if (i < tam) {

  lermatriz_rec(*m, i+1, j, tam);
  }


}
int main(int argc, char const *argv[]) {
  int m[3][3] = {0}, i = 0, j = 0, tam = 3;
  lermatriz_rec(*m, i, j, tam);

  for (size_t i = 0; i < tam; i++) {
    for (size_t j = 0; j < tam; j++) {
      printf("%i\n",m[i][j]);
    }
  }
  return 0;
}
