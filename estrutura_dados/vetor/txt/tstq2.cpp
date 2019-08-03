#include <iostream>

using namespace std;

struct notas{
    int n1, n2, n3;
}
int nv = 0;
notas v[nv];

void cadastrar(){
  cout<<" ESCOLHA O TAMANHO DO VETOR ";
  cin>>nv;
  
  for(int i = 0; i < nv; i++){
      cout<<" PRIMEIRA NOTA - ";
      cin>>v[i].n1;
      cout<<" SEGUNDA NOTA -- ";
      cin>>v[i].n2;
      cout<<" TERCEIRA NOTA - ";
      cin>>v[i].n3;
  }
}

void imprimir(){
  int cont = 1;
  double media = 0;
  for(int i = 0; i < nv; i++){
    media = (v[i].n1 + v[i].n2 + v[i].n3) / 3;
    cout<<" MEDIA ALUNO "<<cont<<" = "<<media<<endl;
    cont++;
  }
}

void menu(){
  int op = 0;
  do{
    cout<<" 1 - CADASTRAR 2 - IMPRIMIR 3 - SAIR "<<endl;
    cin>>op;
    if(op == 1)
      cadastrar();
    else if(op == 2)
      imprimir();
  }while(op != 3);
}

int main(){
  menu();
}