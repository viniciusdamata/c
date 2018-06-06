#include <stdio.h>

int multip_rec(int n1, int n2){
  if(n1 == 0){
    return 0;
  }
  else if (n1 == 1) {
    return n2;
  }
  return n2 +multip_rec(n1-1,n2);

}
int main(int argc, char const *argv[]) {
    int n1, n2;
    printf("Digite n1: \n");
    scanf("%i",&n1);
    printf("Digite n2: \n");
    scanf("%i",&n2);
    printf("%i\n",multip_rec(n1, n2));


}
