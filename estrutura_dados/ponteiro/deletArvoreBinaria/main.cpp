#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct No no;
struct No {
   int valor;
   no* esq;
   no* dir;
};
no* inserir(no* raiz, int valor) {
   no* novo = (no*) malloc(sizeof(no));
   novo->esq = NULL;
   novo->dir = NULL;
   novo->valor = valor;
   if(raiz==NULL) {
      raiz = novo;
   } else {
      no* auxRaiz = raiz;
      no* aux;
      while(auxRaiz != NULL) {
         aux = auxRaiz;
         if(valor<=auxRaiz->valor) {
            auxRaiz = auxRaiz->esq;
         } else {
            auxRaiz = auxRaiz->dir;
         }
      }
      if(valor<=aux->valor) {
         aux->esq = novo;
      } else {
         aux->dir = novo;
      }

   }
   return raiz;
}

void imprimir(no* raiz) {
   if(raiz!=NULL) {
      cout<<raiz->valor<<" ";
      imprimir(raiz->esq);
      imprimir(raiz->dir);
   }
}

no* excluir(no* raiz, int valor) {
   if(raiz == NULL) {
      return NULL;
   } else if(raiz->valor == valor
             && raiz->esq == NULL && raiz->dir == NULL) {
      free(raiz);
      return NULL;
   } else {
      no* auxRemovido = raiz;
      no* auxPaiRemovido=NULL;
      while(auxRemovido != NULL) {
         if(auxRemovido->valor == valor)
            break;
         auxPaiRemovido = auxRemovido;
         if(valor<=auxRemovido->valor) {
            auxRemovido = auxRemovido->esq;
         } else {
            auxRemovido = auxRemovido->dir;
         }
      }

      no* paiEsq = auxRemovido;
      no* filhoDir = paiEsq->esq;
      if(filhoDir != NULL) {
         while(filhoDir->dir!= NULL) {
            paiEsq = filhoDir;
            filhoDir= filhoDir->dir;
         }
      }
      if(auxRemovido->esq==NULL && auxRemovido->dir==NULL) {
         free(auxRemovido);
      } else {
         if(paiEsq->dir==NULL) {
            paiEsq->dir= auxRemovido->dir;
         } else if(paiEsq != auxRemovido) {
            paiEsq->dir=filhoDir->esq;
            filhoDir->esq = auxRemovido->esq;
         }
         filhoDir->dir = auxRemovido->dir;

         free(auxRemovido);
      }
      if(auxPaiRemovido != NULL) {
         if(valor<auxPaiRemovido->valor) {
            auxPaiRemovido->esq = filhoDir;
         } else {
            auxPaiRemovido->dir = filhoDir;
         }
      } else {
         raiz = filhoDir;
      }
      return raiz;
   }

}




int main() {
   no* raiz = NULL;
   raiz = inserir(raiz,18);
   raiz = inserir(raiz,8);
   raiz = inserir(raiz,6);
   raiz = inserir(raiz,15);
   raiz = inserir(raiz,10);
   raiz = inserir(raiz,17);
   raiz = inserir(raiz,9);
   raiz = inserir(raiz,13);
   raiz = inserir(raiz,11);
   imprimir(raiz);
   raiz = excluir(raiz,10);
   cout<<endl;
   imprimir(raiz);
   return 0;
}
