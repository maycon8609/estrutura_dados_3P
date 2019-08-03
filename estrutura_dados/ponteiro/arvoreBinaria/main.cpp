#include <iostream>

using namespace std;
typedef struct NO no;
struct NO {
   int valor;
   no* dir;
   no* esq;
};

no* inserir(no* raiz, int valor) {
   no* novo = (no*) malloc(sizeof(no));
   novo->esq = NULL;
   novo->dir = NULL;
   novo->valor = valor;
   if(raiz == NULL) {
      raiz = novo;
   } else {
      no* auxRaiz = raiz;
      no* aux;
      while(auxRaiz != NULL) {
         aux = auxRaiz;
         if(valor <= auxRaiz->valor) {
            auxRaiz = auxRaiz->esq;
         } else {
            auxRaiz = auxRaiz->dir;
         }
      }
      if(valor <= aux->valor) {
         aux->esq = novo;
      } else {
         aux->dir = novo;
      }
   }
   return raiz;
}

void imprimirPreOrdem(no* raiz) {
   if(raiz != NULL) {
      cout<<raiz->valor<<endl;
      imprimirPreOrdem(raiz->esq);
      imprimirPreOrdem(raiz->dir);
   }
}

void imprimirInOrdem(no* raiz) {
   if(raiz != NULL) {
      imprimirInOrdem(raiz->esq);
      cout<<raiz->valor<<endl;
      imprimirInOrdem(raiz->dir);
   }
}

void imprimirPosOrdem(no* raiz) {
   if(raiz != NULL) {
      imprimirPosOrdem(raiz->esq);
      imprimirPosOrdem(raiz->dir);
      cout<<raiz->valor<<endl;
   }
}

int main() {
   no* raiz = NULL;
   raiz = inserir(raiz, 5);
   raiz = inserir(raiz, 2);
   raiz = inserir(raiz, 7);
   raiz = inserir(raiz, 3);
   raiz = inserir(raiz, 1);
   raiz = inserir(raiz, 6);
   raiz = inserir(raiz, 5);
   cout<<" PRE-ORDEM "<<endl;
   imprimirPreOrdem(raiz);
   cout<<" IN-ORDEM "<<endl;
   imprimirInOrdem(raiz);
   cout<<" POS-ORDEM "<<endl;
   imprimirPosOrdem(raiz);
}
