#include <iostream>

using namespace std;
int v[6];

void lerNum(){
 for(int i = 0; i < 6; i++){
    cout<<" DIGITE UM NUMERO  ";
    cin>>v[i];

 }
}

void maiorNum(){
 int maior = 0;
 for(int i = 0; i < 6; i++){
   if(v[i] > maior){
      maior = v[i];
   }
 }
 cout<<maior;
}

int main(){
  lerNum();
  maiorNum();
}
