#include <iostream>

using namespace std;
typedef struct elemento Elemento;
struct elemento{
  int valor;
  Elemento* prox;
};

Elemento* inserir(Elemento* cabeca, int valor){
  Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
  novo->valor = valor;
  if(cabeca == NULL){
     novo->prox = novo;
     return novo;
  }else{
    Elemento* aux = cabeca;
    while(aux->prox != cabeca){
      aux = aux->prox;
    }
    novo->prox = cabeca;
    aux->prox = novo;
    return cabeca;
  }
}

void imprimir(Elemento* cabeca){
 if(cabeca != NULL){
  Elemento* aux = cabeca;
  while(aux->prox != cabeca){
    cout<<aux->valor<<endl;
    aux = aux->prox;
  }
  cout<<aux->valor;
 }
}

int main() {
  Elemento* cabeca = NULL;
  cabeca = inserir(cabeca, 3);
  cabeca = inserir(cabeca, 5);
  cabeca = inserir(cabeca, 7);
  imprimir(cabeca);
}
