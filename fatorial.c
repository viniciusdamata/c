#include <stdio.h>

int fatorial(int x) {
  int fat = 1;
  for (int i = x; i > 0; i--) {
    fat = fat * i;
  }
  return fat;
}

int main() {
      int n;
      printf("Digite n:\n");
      scanf("%i",&n);
      printf("Resultado:\n %i\n",fatorial(n));
}
