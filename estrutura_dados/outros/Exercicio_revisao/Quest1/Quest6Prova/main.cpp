#include <iostream>

using namespace std;

typedef struct cadastro pilha;

struct cadastro{
  int n;
  pilha* prox;
};

pilha* inserir(pilha* topo, int n){
  pilha* novo = (pilha*) malloc(sizeof(pilha));
  novo->n = n;
  novo->prox = topo;
  return novo;
}

void imprimir(pilha* topo){
  for(pilha* i = topo; i != NULL; i = i->prox){
    cout<<i->n<<endl;
  }
}

void maiorValor(pilha* topo){
  int aux = 0;
  for(pilha* i = topo; i != NULL; i = i->prox){
    if(i->n > aux){
      aux = i->n;
    }
  }
  cout<<" MAIOR VALOR "<<aux;
}

void verificar(){
  pilha* topo;
  topo = NULL;
  int n = 0;

  do{
    cout<<" DIGITE UM NUMERO ";
    cin>>n;
    topo = inserir(topo, n);
  }while(n >= 0);

  imprimir(topo);
  maiorValor(topo);
}

int main() {
  verificar();
}
