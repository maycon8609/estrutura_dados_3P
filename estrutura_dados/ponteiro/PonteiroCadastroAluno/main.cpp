#include <iostream>
#include<stdlib.h>

using namespace std;
typedef struct aluno pilha;

struct aluno {
   string aluno, id;
   pilha* prox;
};

pilha* cadastrar(pilha* topo, string nome) {
   pilha* novo = (pilha*) malloc(sizeof(pilha));
   novo->aluno = nome;
   novo->prox = topo;
   return novo;
}

void imprimir(pilha* topo) {
   for(pilha* i = topo; i != NULL; i = i->prox) {
      cout<<i->aluno;
   }
}

void novoAluno(pilha* topo) {
   string nome;
   cout<<" NOME ALUNO ";
   cin>> nome;
   topo = cadastrar(topo, nome);
}

void menu(pilha* topo) {
   int op = 0;
   do {
      cout<<" 1 - CADASTRAR | 2 - IMPRIMIR | 0 - SAIR ";
      cin>>op;

      if(op == 1) {
         novoAluno(topo);
      } else if(op == 2) {
         imprimir(topo);
      }else{
        cout<<" OPCAO IVALIDA ";
      }
   } while(op != 0);
}

int main() {
   pilha* topo;
   topo = NULL;

   menu(topo);
}
