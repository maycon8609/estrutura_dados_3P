#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct pilha list;

struct pilha {
   int valor;
   list* prox;
};

list* inserir(list* topo, int valor) {
   list* novo = (list*) malloc(sizeof(list));
   novo->valor = valor;
   novo->prox = topo;
   return novo;
}

void imprimir(list* torreA, list* torreB, list* torreC) {
   cout<<endl<<" TORRE A ";
   for(list* t = torreA; t != NULL; t = t -> prox) {
      cout<<t -> valor<<" ";
   }
   cout<<endl<<" TORRE B ";
   for(list* t = torreB; t != NULL; t = t -> prox) {
      cout<<t -> valor<<" ";
   }
   cout<<endl<<" TORRE C ";
   for(list* t = torreC; t != NULL; t = t -> prox) {
      cout<<t -> valor<<" ";
   }
}


list* trocaAC(list* torreA, list* torreC) { //a-c = c - 5 | a-c = c - 15 | a-c = c - 5-10-15
   list* aux = torreA -> prox;
   torreA -> prox = torreC;
   torreC = torreA;
   torreA = aux;
}

void trocaAB(list* torreA, list* torreB) { //a-b = b - 10
   list* aux = torreA -> prox;
   torreA -> prox = torreB;
   torreB = torreA;
   torreA = aux;
}

void trocaCB(list* torreC, list* torreB) { //c-b = b - 5-10
   list* aux = torreC -> prox;
   torreC -> prox = torreB;
   torreB = torreC;
   torreC = aux;
}


void trocaBA(list* torreB, list* torreA) { //b-a = a - 5
   list* aux = torreB -> prox;
   torreB -> prox = torreA;
   torreA = torreB;
   torreB = aux;
}

void ordenar() {
   list* torreA;
   torreA = NULL;

   torreA = inserir(torreA, 15);
   torreA = inserir(torreA, 10);
   torreA = inserir(torreA, 5);
   torreA = inserir(torreA, 2);

   list* torreB;
   torreB = NULL;

   list* torreC;
   torreC = NULL;

   while(torreA != NULL && torreB != NULL) {
      if(torreA != NULL) {
         if(torreC == NULL || torreC->valor > torreA->valor) {
            trocaAC(torreA, torreC);
         } else if(torreB == NULL || torreB->valor > torreA->valor) {
            trocaAB(torreA, torreB);
         }
      } else if(torreB != NULL) {
         if(torreA == NULL || torreA->valor > torreB->valor) {
            trocaBA(torreB, torreA);
         }
      } else if(torreC != NULL) {
         if(torreB == NULL || torreB->valor > torreC->valor) {
            trocaCB(torreC, torreB);
         }
      }
   }

   imprimir(torreA, torreB, torreC);
}

int main() {
   ordenar();
}

/*
list* topoA(list* torreA, list* torreB, list* torreC) {
   if(torreA != NULL) {
      if(torreC == NULL || torreC->valor > torreA->valor) {
         trocaAC(torreA, torreC);
      } else if(torreB == NULL || torreB->valor > torreA->valor) {
         trocaAB(torreA, torreB);
      }
   }
   return torreA;
}

list* topoB(list* torreA, list* torreB, list* torreC) {
   if(torreB != NULL) {
      if(torreA == NULL || torreA->valor > torreB->valor) {
         trocaBA(torreB, torreA);
      }
   }
   return torreB;
}

list* topoC(list* torreA, list* torreB, list* torreC) {
   if(torreC != NULL) {
      if(torreB == NULL || torreB->valor > torreC->valor) {
         trocaCB(torreC, torreB);
      }
   }
   return torreC;
}

void ordenar() {
   list* torreA;
   torreA = NULL;

   torreA = inserir(torreA, 15);
   torreA = inserir(torreA, 10);
   torreA = inserir(torreA, 5);
   torreA = inserir(torreA, 2);

   list* torreB;
   torreB = NULL;

   list* torreC;
   torreC = NULL;

   while(torreA != NULL && torreB != NULL) {
     topoA(torreA, torreB, torreC);
     topoB(torreA, torreB, torreC);
     topoC(torreA, torreB, torreC);
    }

   imprimir(torreA, torreB, torreC);
}

int main() {
   ordenar();
}

*/
