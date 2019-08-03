#include <iostream>

using namespace std;

    int fatorial(int n){
        int fat = 1;
        for(int i = 1; i <= n; i++){
            fat = fat * i;
        }
        return fat;
    }

    bool primo(int n){

        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }


int main(){

    int n;

    /*
    cout<<" DIGITE UM VALOR PARA FATORAR ";
    cin>> n;
    cout<<" FATORIAL "<<fatorial(n)<<endl;
    */


    for(int i = 10; i <= 100; i++){
    if(primo(i)){
        cout<<i<<endl;
    }
  }
}
