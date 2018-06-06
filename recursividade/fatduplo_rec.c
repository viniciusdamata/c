#include <stdio.h>
int fatduplo(int n){
    if(n == 1){
      return 1;
    }
    return n * fatduplo(n-2);



}
int main(int argc, char const *argv[]) {
  int n;
  printf("Digite n: \n");
  scanf("%i",&n);
  printf("Fatorial duplo: %i\n",fatduplo(n));
  return 0;
}
