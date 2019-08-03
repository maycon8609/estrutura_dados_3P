#include <iostream>
#define tam 5

using namespace std;

int main(){

    int v[tam]{5, -2, 3, -1, 4};
    int qtd = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] < 0){
            cout<<v[i]<<endl;
            qtd++;
        }
    }
    cout<<qtd;


}
