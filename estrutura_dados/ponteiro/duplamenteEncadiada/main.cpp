#include <iostream>

using namespace std;

typedef struct list l;
struct list{
  int n;
  l* prox;
  l* ant;
};

l* inserir(l* fim, int n){
  l* novo = (l*) malloc(sizeof(l));
  novo->n = n;
  if(fim == NULL){
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
  }else{
    novo->ant = fim;
    novo->prox = NULL;
    fim->prox = novo;
    return novo;
  }
}

void imprimirI(l* inicio){
  for(l* i = inicio; i != NULL; i = i->prox){
    cout<<i->n<<endl;
  }
}

void imprimirF(l* fim){
  for(l* i = fim; i != NULL; i = i->ant){
    cout<<i->n<<endl;
  }
}

int main() {
  l* inicio = NULL;
  l* fim = NULL;
  fim = inserir(fim, 3);
  inicio = fim;
  fim = inserir(fim, 5);
  fim = inserir(fim, 10);
  imprimirI(inicio);
  imprimirF(fim);
}
