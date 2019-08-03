#include <iostream>
#include <string>
#define t 2
using namespace std;

struct aluno
{
   string nome;
   double nota1, nota2, nota3;
};
aluno a[t];

void media(string nome, double nota1, double nota2, double nota3)
{
   for(int i = 0; i < t; i++)
   {
      if((nota1 + nota2 + nota3) / 3 >= 6)
      {
         cout<<nome<<" APROVADO ";
         cout<<endl;
      }
      else
      {
         cout<<nome<<" REPROVADO ";
         cout<<endl;
      }
   }
}


int main()
{

   for(int i= 0; i < t; i++)
   {
      cout<<" DIGITE SEU NOME ";
      cin>>a[i].nome;

      cout<<" DIGITE A NOTA 1 ";
      cin>>a[i].nota1;
      cout<<" DIGITE A NOTA 2 ";
      cin>>a[i].nota2;
      cout<<" DIGITE A NOTA 3 ";
      cin>>a[i].nota3;
      media(a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3);
   }
   media();

}
