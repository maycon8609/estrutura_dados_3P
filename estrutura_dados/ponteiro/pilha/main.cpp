#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct estrutura pilha;

struct estrutura {
   int valor;
   pilha* prox;
};

pilha* push(pilha* topo, int valor) {
   pilha* novo = (pilha*) malloc(sizeof(pilha));
   novo->valor = valor;
   novo->prox = topo;
   return novo;
}

pilha* imprimir(pilha* topo) {
   for(pilha* i = topo; i != NULL; i = i->prox) {
      cout<<i->valor<<endl;
   }
}

void pop(pilha* topo, int valor) {
   if(topo != NULL) {
      pilha* ant = topo;
      for(pilha* i = topo; i != NULL; i = i->prox) {
         if(i->valor == valor) {
            pilha* aux = i;
            ant->prox = aux->prox;
            free(aux);
         }
         ant = i;
      }
   }
}


int main() {
   pilha* topo = NULL;

   topo = push(topo, 10);
   topo = push(topo, 15);
   topo = push(topo, 20);
   imprimir(topo);

   cout<<" remover "<<endl;
   pop(topo, 20);
   imprimir(topo);
}
