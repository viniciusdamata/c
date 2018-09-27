#include <stdio.h>
struct pessoa{
  int idade;
  char nome[64];
  int telefone;
  float salario;
};
  typedef struct pessoa p;
void cadastraPessoas(p pes[], int tam){
  for(int i = 0; i < tam; i++){
    printf("Digite idade: \n");
    scanf("%i",&pes[i].idade);
    printf("Digite nome: \n");
    scanf("%s",pes[i].nome);
    printf("Digite telefone: \n");
    scanf("%i",&pes[i].telefone);
    printf("Digite salario: \n");
    scanf("%f",&pes[i].salario);

  }
}
void imprimepessoas(p pes[], int tam) {
  for (int i = 0; i < tam; i++) {
    printf("Idade: %i\n",pes[i].idade);
    printf("Nome: %s\n",pes[i].nome);
    printf("Telefone: %i\n",pes[i].telefone);
    printf("Salario: %f\n",pes[i].salario);
  }
}
void selectionidade(p pes[], int tam){
  p aux;
  int min;
  for (int i = 0; i < tam-1; i++) {
    min = i;
    for (int j = i+1; j < tam; j++) {
      if(pes[j].idade < pes[min].idade){
        min = j;
      }
    }
    if(min != i){
      aux = pes[min];
      pes[min] = pes[i];
      pes[i] = aux;
    }
  }
}
void bubbleidade(p pes[], int tam){
  int i, j, continua;
  p aux;
  for (i = tam-1; tam >= 0; i++){
    continua = 0;
    for (j = 0; j < i; j++) {
      if(pes[j].idade > pes[j-1].idade){
        aux = pes[j];
        pes[j] = pes[j+1];
        pes[j+1] = aux;
        continua = 1;
      }
    }
    if(continua == 0){
      i = -1;
    }
  }
}
void insertionidade(p pess[], int tam){
  int i, j;
  p aux;
  for (i = 0; i < tam; i++) {
    aux = pess[i];
    j = i;
    while(j > 0 && aux < pess[j-1].idade){
      v[j] = v[j-1];
      v[j-1] = aux;
      j--;
    }
  }
}
void merge(p pes[], int ini, int fim){
  int meio;
  meio = (ini+fim)/2;
  if(ini < fim){
    merge(p, ini, meio);
    merge(p, meio+1, fim);

  }
}
void merge_sort(p pes[], int ini, int meio, int fim){
  
}

int main(void) {
  int qtd = 1;
  p pes[qtd];
  cadastraPessoas(pes, qtd);
  imprimepessoas(pes, qtd);

}
