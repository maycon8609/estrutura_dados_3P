#include <iostream>
#include<stdlib.h>

using namespace std;

typedef struct lista list;

struct lista{
  int num;
  list* prox;
};

list* cadastrar(list* lst, int valor){
  list* novo=(list*) malloc(sizeof(list));
  novo -> num = valor;
  novo -> prox = lst;
  return novo;
}

void buscar(list* lst){
  int n;
  bool achou = false;
  cin>>n;
  for(list* i = lst; i != NULL; i = i -> prox){
    if(n == i -> num){
      cout<<" VALOR EXISTENTE "<<endl;
      achou = true;
      cout<<n;
      break;
    }
  }
  if(achou == false){
    cout<<" ELEMENTO NAO ENCONTRADO ";
  }
}

void imprimir(list* lst){
  for(list* i = lst; i != NULL; i = i -> prox){
    cout<< i -> num<<endl;
  }
}

list* delet(list* lst){
  int n;
  cin>> n;
  list* ant = NULL;
  for(list* i = lst; i != NULL; i = i -> prox){
    if(i -> num == n){
      if(ant != NULL){
        ant -> prox = i -> prox;
        free(i);
        return lst;
      }else{
      lst = i -> prox;
        free(i);
        return lst;
      }
    }
    ant = i;
  }
}

int main(){

  list* lst;
  lst = NULL;
  lst = cadastrar(lst, 5);
  lst = cadastrar(lst, 3);
  lst = cadastrar(lst, 7);
  imprimir(lst);
  //buscar(lst);
  cout<<endl;
  lst = delet(lst);
  imprimir(lst);

}
