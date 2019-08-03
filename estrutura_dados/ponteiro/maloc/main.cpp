#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct lista list;
struct lista{
  int num;
  list *prox;
};

int n;

list* cadastra(list* lst, int valor){
  list* novo=(list*) malloc(sizeof(list));
  novo -> num = valor;
  novo -> prox = lst;
  return novo;
}

void imprimir(list* lst){
  for(list* p = lst; p!= NULL; p = p -> prox){
    cout<< p -> num <<endl;
  }
}

void buscar(list* lst){
  for(list* p = lst; p != NULL; p = p -> prox){
    if(p -> num == n){
      cout<<" POSSUI ESSE VALOR "<<endl;
      cout<<p -> num;
      break;
    }
  }
}

int main(){
  list* lst;
  lst = NULL;
  lst = cadastra(lst, 10);
  lst = cadastra(lst, 20);
  lst = cadastra(lst, 30);
  n = 20;
  imprimir(lst);
  buscar(lst);

}
