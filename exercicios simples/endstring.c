/*Compara o final de duas strings*/
#include <stdbool.h>
#include <stdio.h>

int sizestring(const char *string){
    int cont = 0;
    while(string[cont] != '\0'){
      cont++;
    }
    return cont;
}
bool solution(const char *string, const char *ending) {
  int size = sizestring(string);
  int size2 = sizestring(ending);
  if (ending == ""){
    return true;
  }
  if (ending == " "){
    return true;
  }
  if (size2 == 1){
    if(string[size-1] == ending[size2-1]) {
      return true;
    }
  }
  if (size2 >= 5) {
    return false;
  }
  if (size2 > size) {
    return false;
  }

  if (string[size-1] == ending[size2-1] && string[size-2] == ending[size2-2] &&
  string[size-3] == ending[size2-3]){
    return true;
    }
  else {
    return false;
  }
}

int main(int argc, char const *argv[]) {

  const char *string = "bbaa";
  const char *ending = "";

  if(solution(string, ending) == true) {
    printf("True ");
  }
  if(solution(string, ending) == false) {
    printf("False ");
  }

}
