#include <stdio.h>
//ctrl + ; comenta linhas
char palavra(int n, char String*){
  if(n == 1){
    return 'a';
  }
  else if(n == 2){
    return 'b';
  }
  return String + palavra(n-1, String) + palavra(n-2, String);

}
int main(int argc, char const *argv[]) {
  int n = 5;

  char fib[128];
  char *String = fib;
  //palavra(n, String);
  printf("%cp\n",palavra(n, String));

  return 0;

}
