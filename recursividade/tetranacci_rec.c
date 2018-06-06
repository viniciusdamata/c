#include <stdio.h>

int tetra(int n){
  if(n < 4){
    return 0;
  }
  else if(n < 6){
    return 1;
  }
  return tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);
}
int main(int argc, char const *argv[]) {
  int n = 13;
  printf("%i\n",tetra(n));  
  return 0;
}
