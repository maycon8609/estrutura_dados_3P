#include <iostream>

using namespace std;

void sequencia(int v[], int tam){
  int cont = 0;
  for(int i = 0; i < tam; i++){
    for(int j = 0; j < tam; j++){
      if(v[i] == v[j]){
        cont++;
      }
    }
    cout<<v[i]<<" se repete "<<cont<<endl;
    cont = 0;
  }
}

int main(){
  int v[] = {1, 3, 0, 1, 0, 2, 1, 2};
  sequencia(v, 8);
}
