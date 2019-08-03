#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct notas list;

struct notas{
  int num;
  list* prox;
};

list* inserir(list* topo, int valor){
  list* novo = (list*) malloc(sizeof(list));
  novo -> num = valor;
  novo -> prox = topo;
  return novo;
}

void imprimir(list* topo){
  for(list* i = topo; i != NULL; i = i -> prox){
    cout<<i -> num<<" ";
  }
}


int main(){
  list* lst;
  lst = NULL;
  int n;
  for(int i = 0; i < 10; i++){
    cout<<" DIGITE UM NUMERO ";
    cin>>n;
    lst = inserir(lst, n);
  }
  imprimir(lst);
}
