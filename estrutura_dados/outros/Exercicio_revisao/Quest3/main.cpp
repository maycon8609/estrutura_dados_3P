#include <iostream>
#define tam 2
using namespace std;

int soma(int vet[]){
  int s = 0;
  for(int i = 0; i < tam; i++){
      s += vet[i];
  }
  return s;
}

void cadastrar(){
  int vet[tam];
  for(int i = 0; i < tam; i++){
      cout<<" DIGITE UM VALOR ";
      cin>>vet[i];
  }
  cout<<soma(vet);
}

int main(){
  cadastrar();
}
