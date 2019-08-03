#include <iostream>
#define tam 3
using namespace std;

int media(int vet[]){
  int mediaTurma = 0, soma = 0;
  for(int i = 0; i < tam; i++){
    soma += vet[i];
  }
  mediaTurma = soma / tam;
  return mediaTurma;
}

void ler(){
  int vet[tam];
  for(int i = 0; i < tam; i++){
    cout<<" ENTRE COM A NOTA ";
    cin>>vet[i];
  }
  cout<<" MEDIA DA TURMA "<<media(vet);
}

int main(){
ler();
}
