#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
typedef struct lista list;

struct lista{
  int num;
  list *prox;
};

 list* cadastrar(list* lst, int num){
   list* novo = (list*) malloc(sizeof(list));
   novo -> num = num;
   novo -> prox = lst;
   return novo;
}

list* imprimir(list* lst){
   for(list* m = lst; m != NULL; m = m -> prox){
      cout<<" num "<<m -> num<< endl;
   }
}

list* maior(list* lst){
   int aux = 0;
   for(list* m = lst; m != NULL; m = m -> prox){
      if(aux < m -> num){
        aux = m -> num;
      }
   }
   cout<<" MAIOR "<<aux<<endl;
}

int main(){

   list* lst = NULL;

   int n = 0;
   do{
   cout<<" DIGITE UM NUMERO "<<endl;
   cin>>n;
    lst = cadastrar(lst, n);
   }while(n > 0);

   imprimir(lst);
   maior(lst);

}
