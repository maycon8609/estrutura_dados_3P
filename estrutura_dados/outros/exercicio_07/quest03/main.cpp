#include <iostream>

using namespace std;

struct produto{
  int cod, quant;
  string nome;
  double preco;
};

produto lista[10];
int tam = 0;


void cadastrar(){
  cout<<" NOME ";
  cin>>lista[tam].nome;
  cout<<" QUANTIDADE ";
  cin>>lista[tam].quant;
  cout<<" COD ";
  cin>>lista[tam].cod;
  cout<<" PRECO ";
  cin>>lista[tam].preco;
  tam++;
  cout<<endl;
}

void maiorQuant(){
   int quant = 0;
   string nome;
   for(int i = 0; i < tam; i++){
      if(quant < lista[i].quant){
         nome = lista[i].nome;
         quant = lista[i].quant;
      }
   }
   cout<<" NOME ------- "<<nome<<endl;
   cout<<" QUANTIDADE - "<<quant<<endl;
   cout<<endl;
}

void maiorPreco(){
  string nome;
  double maior = 0;
  for(int i = 0; i < tam; i++){
    if(lista[i].preco > maior){
      nome = lista[i].nome;
      maior = lista[i].preco;
    }
  }
  cout<<" NOME -- "<<nome<<endl;
  cout<<" PRECO - "<<maior<<endl;
  cout<<endl;
}


void imprimir(){
   for(int i = 0; i < tam; i++){
      cout<<" NOME -- "<<lista[i].nome<<" ";
      cout<<" COD -- "<<lista[i].cod<<" ";
      cout<<" PRECO -- "<<lista[i].preco<<" ";
      cout<<" QUANTIDADE -- "<<lista[i].quant<<" "<<endl;
      cout<<endl;
   }
}

void menu(){
  int op;
  do{
    cout<<" 1- cadastrar 2 – maior preco 3 - maior quantidade 4 – imprimir todos 5 - sair "<<endl;
    cin>>op;
    if(op == 1)
      cadastrar();
    else if(op == 2)
      maiorPreco();
    else if(op == 3)
      maiorQuant();
    else if(op == 4)
      imprimir();
  }while(op != 5);
  cout<<endl;
}

int main(){

  menu();

}
