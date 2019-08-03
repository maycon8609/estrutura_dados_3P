#include <iostream>

using namespace std;

int raizQ(int n) {
   int sub = 1;
   int cont = 0;
   while(n >= sub) {
      n -= sub;
      sub += 2;
      cont++;
   }
   return cont;
}

int main() {
   cout<<" RAIZ DE 25 = "<<raizQ(25)<<endl;
   cout<<" RAIZ DE 16 = "<<raizQ(16)<<endl;
   cout<<" RAIZ DE 18 = "<<raizQ(18)<<endl;
   int n = 22;
   cout<<" RAIZ DE "<< n << " = "<<raizQ(n)<<endl;

}
