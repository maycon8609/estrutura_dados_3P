#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct No no;
struct No{
    int valor;
    no* esq;
    no* dir;
};
no* inserir(no* raiz, int valor){
    no* novo = (no*) malloc(sizeof(no));
    novo->esq = NULL;
    novo->dir = NULL;
    novo->valor = valor;
    if(raiz==NULL){
        raiz = novo;
    }else{
        no* auxRaiz = raiz;
        no* aux;
        while(auxRaiz != NULL){
            aux = auxRaiz;
            if(valor<=auxRaiz->valor){
                auxRaiz = auxRaiz->esq;
            }else{
                auxRaiz = auxRaiz->dir;
            }
        }
        if(valor<=aux->valor){
            aux->esq = novo;
        }else{
            aux->dir = novo;
        }

    }
    return raiz;
}

no* remover(no* raiz, int valor){
    if(raiz == NULL){
        return NULL;
        //caso tenha apenas um no
    }else if(raiz->valor==valor && raiz->esq == NULL && raiz->dir==NULL){
        free(raiz);
        return NULL;
    }else{
        no* auxRaiz = raiz;
        no* aux=NULL;
        while(auxRaiz != NULL){
            if(auxRaiz->valor == valor)
            break;
            aux = auxRaiz;
            if(valor<=auxRaiz->valor){
                auxRaiz = auxRaiz->esq;
            }else{
                auxRaiz = auxRaiz->dir;
            }
        }
        //nao encontrou o no
        if(auxRaiz == NULL){
            return raiz;
        }
        //se encontrou procurar o no mais a direita com o pai
        no* p = auxRaiz;
        no* q = p->esq;
        if(q!= NULL){//verificar se tem pelo menos um no mais a esquerda
            while(q->dir != NULL){
              p= q;
              q=q->dir;
            }
            //verifica se andou pelo menos um no a direita
            if(p!=auxRaiz){
                p->dir = q->esq;//referencia no a esq do no que vai subistituir o no removido
                q->esq = auxRaiz->esq;//referencia no a esq do removido para o que vai subistituir
            }
            //referencia o no a direita do no que vai ser removido
            q->dir = auxRaiz->dir;
         }
         //se removido for a raiz
        if(aux == NULL){
            free(auxRaiz);
            return q;
        }
        //verifica qual lado da raiz foi removido o no e referencia
        if(valor<=aux->valor){
            aux->esq=q;
        }else{
            aux->dir=q;
        }
        free(auxRaiz);

    }
    return raiz;
}

void imprimir(no* raiz){
    if(raiz!=NULL){
        cout<<raiz->valor<<" ";
        imprimir(raiz->esq);
        imprimir(raiz->dir);
    }
}



int main()
{
    no* raiz = NULL;
    raiz = inserir(raiz,18);
    raiz = inserir(raiz,8);



    imprimir(raiz);
    raiz=remover(raiz, 18);
    cout<<endl;
    imprimir(raiz);
    return 0;
}

