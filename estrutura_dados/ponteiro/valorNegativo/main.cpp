#include <iostream>

using namespace std;

typedef struct num neg;

struct num {
   int n;
   neg* prox;
};

neg* push(neg* topo, int n) {
   neg* novo = (neg*) malloc(sizeof(neg));
   novo->n = n;
   novo->prox = topo;
   return novo;
}

void imprimir(neg* topo){
  for(neg* i = topo; i != NULL; i = i->prox){
    cout<< i->n <<endl;
  }
}

void inserir() {
   neg* topo = NULL;
   int n = 0;
   int maiorNum = 0;

   do {
      cout<<" entre com um numero ";
      cin>>n;

      topo = push(topo, n);

      if(n >= maiorNum){
        maiorNum = n;
      }

   } while(n >= 0);

   imprimir(topo);
   cout<<endl;
   cout<<" maior numero "<< maiorNum <<endl;
}

int main() {
   inserir();
}
