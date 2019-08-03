#include <iostream>
#define tam 10
using namespace std;

int v[]={1, 2, 3, 4, 5, 6, 7, 8, 9,10};
int vet[tam];

void calcQuad(){
  for(int i = 0; i < tam; i++){
    vet[i] = v[i] * v[i];
  }
}

void imprimir(){
  int elemet = 1;
  for(int i = 0; i < tam; i++){
    cout<<" ELEMENTO  "<<elemet<<" = ";
    cout<<v[i]<<" ";
    cout<<" QUADRADO  ";
    cout<<vet[i]<<" "<<endl;
    elemet++;
  }
}

int main(){
  calcQuad();
  imprimir();
}
