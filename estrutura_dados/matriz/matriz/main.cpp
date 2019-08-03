#include <iostream>

using namespace std;

    int x[2][2];
    int y[2][2];
    int z[2][2];

void matriz(){

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<" DIGITE OS NUMEROS PARA X "<<endl;
            cin>>x[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<" DIGITE OS NUMEROS PARA Y "<<endl;
            cin>>y[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            z[i][j] = x[i][j] + y[i][j];
        }
    }
}

void imprimir(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    matriz();
    imprimir();
}
