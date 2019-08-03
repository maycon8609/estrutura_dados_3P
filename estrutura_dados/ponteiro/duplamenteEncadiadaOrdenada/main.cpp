#include <iostream>

using namespace std;

typedef struct list l;
struct list {
   int n;
   l* prox;
   l* ant;
};

l* inserir(l* inicio, int n) {
   l* novo = (l*) malloc(sizeof(l));
   novo->n = n;
   if(inicio == NULL) {
      novo->prox = NULL;
      novo->ant = NULL;
      return novo;
   } /*else if(novo->n >= inicio->n) {
      l* aux = inicio->prox;
      novo->ant = inicio;
      novo->prox = aux;
      inicio->prox = novo;
      return novo;
   }*/
   else {
      for(l* i = inicio; i != NULL; i = i->prox) {
         if(novo->n >= i->n) {
            l* aux = i->prox;
            novo->ant = i;
            novo->prox = aux;
            i->prox = novo;
            aux->ant = novo;
            return novo;
         }
      }
   }
}

void imprimirI(l* inicio) {
   for(l* i = inicio; i != NULL; i = i->prox) {
      cout<<i->n<<endl;
   }
}

void imprimirF(l* fim) {
   for(l* i = fim; i != NULL; i = i->ant) {
      cout<<i->n<<endl;
   }
}


int main() {
   l* inicio = NULL;
   l* fim = NULL;

   inicio = inserir(inicio, 5);
   inicio = fim;
   inicio = inserir(inicio, 15);
   inicio = inserir(inicio, 10);


   cout<<" INICIO "<<endl;
   imprimirI(inicio);
   cout<<" FIM "<<endl;
   imprimirF(fim);
}
