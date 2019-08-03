#include <iostream>

using namespace std;

int main(){

    int v[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<" DIGITE UM NUMERO ";
            cin>>v[i][j];
        }
    }

    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<v[i][j]<<" ";
            soma = soma + v[i][j];
        }
        cout<<" SOMA IQUAL A "<<soma;
        cout<<endl;
    }
    cout<<soma;
}
