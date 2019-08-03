#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct estrutura fila;
struct estrutura{
   int n;
   fila* prox;
};

fila* cadastrar(fila* fim, int valor){
   fila* novo = (fila*) malloc(sizeof(fila));
   novo -> n = valor;
   if(fim != NULL){
   fim -> prox = novo;
   }
   novo -> prox = NULL;
   return novo;
}

void imprimir(fila* inicio){
   for(fila* aux = inicio; aux != NULL; aux = aux -> prox){
     cout<<aux -> n<<endl;
   }
}

fila* remover(fila* inicio){
   if(inicio != NULL){
     fila* aux = inicio;
     inicio = inicio -> prox;
     free(aux);
   }
   return inicio;
}



int main(){

   fila* fim = NULL;
   fila* inicio = NULL;
   fim = cadastrar(fim, 3);
   inicio = fim;
   fim = cadastrar(fim, 5);
   fim = cadastrar(fim, 6);
   imprimir(inicio);
   cout<<" ========== "<<endl;
   inicio = remover(inicio);
   imprimir(inicio);
}
