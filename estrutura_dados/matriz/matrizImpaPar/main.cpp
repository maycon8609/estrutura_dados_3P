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

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(v[i][j] % 2 == 0){
                v[i][j] = 1;
            }else {
                v[i][j] = -1;
            }
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }



}
