#include <iostream>
#define tam 4

using namespace std;

int main(){

    int v[4] = {4, 3, 1, 2};

    for(int i = 0; i < tam; i++){
        if(v[i] % 2 == 0){
           v[i] = 1;
        }else {
           v[i] = -1;
        }
        cout<<v[i]<<endl;
    }
}
