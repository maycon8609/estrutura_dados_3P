#include <iostream>

using namespace std;

int somaP(int n){
  int aux = 0;
  while(n != 0){
    aux += (n*n);
    n--;
  }
  return aux;
}

int main() {
  cout<<somaP(4);

}
