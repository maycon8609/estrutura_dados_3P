#include <iostream>

using namespace std;

struct produto
{
   int cod;
   string nome;
};

produto lista[10];
int tam = 0;

void cadastrar()
{
   cout<<" COD PRODUTO  ";
   cin>>lista[tam].cod;
   cout<<" NOME PRODUTO  ";
   cin>>lista[tam].nome;
   tam++;
}

void imprimir()
{
   for(int i = 0; i < tam; i++)
   {
      cout<<" COD "<<lista[i].cod<<" NOME "<<lista[i].nome<<endl;
   }
}

void ordenar()
{
   for(int i = 0; i < tam; i++)
   {
      for(int j = 0; j < tam; j++)
      {
         if(lista[i].cod < lista[j].cod)
         {
            produto aux = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;
         }
      }
   }
}

void menu()
{
   int op;
   do
   {
      cout<<" 1 - CADASTRAR 2 - IMPRIMIR 3 - ORDENAR 4 - SAIR  ";
      cin>>op;
      if(op == 1)
      {
         cadastrar();
      }
      else if(op == 2)
      {
         imprimir();
      }
      else if(op == 3)
      {
         ordenar();
      }
   }
   while(op != 4);
}

int main()
{

   menu();

}
