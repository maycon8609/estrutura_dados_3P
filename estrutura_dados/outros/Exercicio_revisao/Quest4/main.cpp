#include <iostream>
#define tam 2
using namespace std;

void ordenar(int vet[]){
  for(int i = tam-1; i >= 0; i--){
    cout<<vet[i];
  }
}

void ler(){
 int vet[tam];
 for(int i = 0; i < tam; i++){
    cout<<" DIGITE UM VALOR ";
    cin>>vet[i];
 }
 ordenar(vet);
}

int main(){
  ler();
}
