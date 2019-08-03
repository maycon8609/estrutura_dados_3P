#include <iostream>

using namespace std;

int subSoma(int n){
  if(n % 2 == 0){
    return n / 2;
  }else{
    int aux = n - 1;
    return (aux / 2) - n;
  }
}

int main() {
  cout<<subSoma(7);
}
