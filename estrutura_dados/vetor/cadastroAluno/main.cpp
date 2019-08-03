#include <iostream>
#include <string>

using namespace std;

struct aluno
{
    int cod;
    string nome;
    double idade;
};

//GLOBAL
aluno a[10];
string buscarAluno, contin;
int tam = 0, menu;
bool decisao = true;

void menupos()
{
    cout<<" 1 - CADASTRAR | 2 - BUSCAR | 3 - ALTERAR | 4 - APAGAR | 0 - SAIR "<<endl;
    cin>>menu;
}


void cadastrar()
{
    for(int i = 0; i < tam; i++)
    {
        cout<<" NOME :: ";
        cin>>a[i].nome;

        cout<<" IDADE :: ";
        cin>>a[i].idade;

        cout<<endl;

    }
}

void buscar()
{
    cout<<" COD ";
    int cod;
    cin>>cod;
    bool naoAchou = true;
    for(int i = 0; i < tam; i++)
    {
        if(cod == a[i].cod)
        {
            cout<<" NOME "<<a[i].nome<<endl;
            naoAchou = false;
            break;
        }
    }
    if(naoAchou == true)
    {
        cout<<" COD NAO CADASTRADO ";
    }

}

void editar()
{
        cout<<" COD ";
        int cod;
        cin>>cod;
        bool naoAchou = true;
        for(int i = 0; i < tam; i++)
        {
            if(cod == a[i].cod)
            {
                cout<<" NOME ";
                cin>>a[i].nome;
                cout<<" IDADE ";
                cin>>a[i].idade;
                naoAchou = false;
                break;
            }
        }
        if(naoAchou == true)
        {
            cout<<" COD NAO CADASTRADO ";
        }
}

void apagar()
{
    cout<<" COD ";
        int cod;
        cin>>cod;
        bool naoAchou = true;
        for(int i = 0; i < tam; i++)
        {
            if(cod == a[i].cod)
            {
                a[i] = a[tam - 1];
            }
        }
        if(naoAchou == true)
        {
            cout<<" COD NAO CADASTRADO ";
        }
}

void continuar()
{
    cout<<" CONTINUAR S/N ";
    cin>>contin;
    if(contin == "s" )
    {
        decisao = true;
    }
    else if(contin == "n" )
    {
        decisao = false;
    }
}

int main()
{

    while(decisao == true)
    {
        menupos();

        if(menu == 1)
        {
            cadastrar();
            continuar();
        }
        else if(menu == 2)
        {
            buscar();
            continuar();
        }
        else if(menu == 3)
        {
            editar();
            continuar();
        }
        else if(menu == 4)
        {
            apagar();
            continuar();
        }
        else if(menu == 0)
        {
            decisao = false;
        }

    }
}
