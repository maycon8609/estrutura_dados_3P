#include <iostream>
#include <string>
#define tm 1

using namespace std;

struct aluno
{
    char nome[256];
    double idade, telefone, serie;
};

void menupos()
{
    cout<<" 1 - CADASTRAR | 2 - PESQUISAR | 3 - EDITAR | 4 - APAGAR | 0 - SAIR "<<endl;
}

int main()
{

    aluno a[tm];
    int menu, editar, apagar;
    string buscarAluno, continuar;
    bool decisao = true;

    while(decisao == true)
    {
        menupos();
        cin>>menu;

//CADASTRAR ALUNO
        if(menu == 1)
        {
            cout<<" ================= ";
            cout<<" CADASTRO DE ALUNO ";
            cout<<" ================= "<<endl;
            for(int i = 0; i < tm; i++)
            {
                cin.get();
                cout<<" NOME :: ";
                cin>>a[i].nome;

                cout<<" IDADE :: ";
                cin>>a[i].idade;

                cout<<" TELEFONE :: ";
                cin>>a[i].telefone;

                cout<<" SERIE :: ";
                cin>>a[i].serie;

                cout<<endl;

            }

            cout<<" CONTINUAR S/N ";
            cin>>continuar;
            if(continuar == "s" )
            {
                decisao = true;
            }
            else if( continuar == "n" )
            {
                decisao = false;
            }

        }

//PESQUISAR ALUNO
        else if(menu == 2)
        {
            cout<<" ================= ";
            cout<<"     PESQUISAR     ";
            cout<<" ================= "<<endl;
            cout<<" PESQUISE PELO NOME DO ALUNO ";
            cin>>buscarAluno;

            for(int i = 0; i < tm; i++)
            {
                if( buscarAluno  == a[i].nome )
                {
                    cout<<" NOME: "<<a[i].nome<<endl;
                    cout<<" IDADE: "<<a[i].idade<<endl;
                    cout<<" TELEFONE: "<<a[i].telefone<<endl;
                    cout<<" SERIE: "<<a[i].serie<<endl;
                }
                else
                {
                    cout<<" ALUNO NAO CADASTRADO ";
                }
            }

            cout<<" CONTINUAR S/N ";
            cin>>continuar;
            if(continuar == "s" )
            {
                decisao = true;
            }
            else if( continuar == "n" )
            {
                decisao = false;
            }
        }

//EDITAR ALUNO CADASTRADO
        else if(menu == 3)
        {
            cout<<" ================= ";
            cout<<"      EDITAR       ";
            cout<<" ================= "<<endl;
            for(int i = 0; i < tm; i++)
            {
                cout<<i + 1<<" - "<<a[i].nome<<endl;
            }
            cin>>editar;

            cout<<" NOME: ";
            cin>>a[editar - 1].nome;

            cout<<" IDADE: ";
            cin>>a[editar - 1].idade;

            cout<<" TELEFONE: ";
            cin>>a[editar - 1].telefone;

            cout<<" SERIE: ";
            cin>>a[editar - 1].serie;

            cout<<" CONTINUAR S/N ";
            cin>>continuar;
            if(continuar == "s" )
            {
                decisao = true;
            }
            else if( continuar == "n" )
            {
                decisao = false;
            }
        }

//APAGAR CADASTRO
        else if(menu == 4)
        {

            cout<<" ================= ";
            cout<<"      APAGAR       ";
            cout<<" ================= "<<endl;
            for(int i = 0; i < tm; i++)
            {
                cout<<i + 1<<" - "<<a[i].nome<<endl;
            }
            cin>>apagar;

            for(int i = apagar - 1; i < tm; i++)
            {
                a[i] = a[i + 1];
            }

        }

//FINALIZAR PROGRAMA
        else if(menu == 0)
        {
            decisao = false;
        }
    }

}
