#include <iostream>

using namespace std;

int main(){

    int v[5];

    for(int i = 0; i < 5; i++){
        cout<<" DIGITE UM NUMERO ";
        cin>>v[i];
    }
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += v[i];
    }
    cout<<soma;

}
