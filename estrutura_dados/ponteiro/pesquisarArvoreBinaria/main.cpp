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

bool pesquisar(no* raiz, int valor) {
   if(raiz != NULL) {
      while(raiz != NULL) {
         if(raiz->valor == valor) {
            return true;
         } else if(valor < raiz->valor) {
            raiz = raiz->esq;
         } else {
            raiz = raiz->dir;
         }
      }
      return false;
   }
}

no* remover(no* raiz, int valor) {
   if(raiz == NULL) {
      return NULL;
   } else if(raiz->valor == valor && raiz->esq == NULL && raiz->dir == NULL) {
      free(raiz);
      return NULL;
   } else {
      no* auxRemove = raiz;
      no* auxpai;



      while(auxRemove->valor != valor) {
         auxpai = auxRemove;
         if(valor <= auxRemove->valor) {
            auxRemove = auxRemove->esq;
         } else {
            auxRemove = auxRemove->dir;
         }
      }
      no* auxEsq = auxRemove;
      no* auxDir = auxEsq->esq;
      while(auxDir->dir != NULL){
          auxEsq= auxDir;
          auxDir=auxDir->dir;
      }

      auxEsq->dir = auxDir->esq;
      auxDir->esq = auxRemove->esq;
      auxDir->dir = auxRemove->dir;

      if(valor < auxpai->valor)
      auxpai->dir = auxDir;
      free(auxRemove);
   }
}

int main() {
   no* raiz = NULL;
   raiz = inserir(raiz, 18);
   raiz = inserir(raiz, 8);
   raiz = inserir(raiz, 6);
   raiz = inserir(raiz, 15);
   raiz = inserir(raiz, 10);
   raiz = inserir(raiz, 17);
   raiz = inserir(raiz, 9);
   raiz = inserir(raiz, 13);
   raiz = inserir(raiz, 11);
   raiz = inserir(raiz, 20);

  cout<<pesquisar(raiz, 10)<<endl;
  cout<<" REMOVER ";
  remover(raiz, 10);
  cout<<" REMOVIDO ";
  cout<<pesquisar(raiz, 10)<<endl;
}
