#include <iostream>

using namespace std;

struct triangulo{
    int a, b, c;
};

void verificar(int a, int b, int c){
    if((a + b > c) && (b + c > a) && (a + c > b)){
       cout<<" TRIANGULO ";
    }else{
       cout<<" NAO TRIANGULO "<<endl;
    }
}


int main(){

    triangulo t[3];

    for(int i = 0; i < 3; i++){
       cout<<" DIGITE VALOR A ";
       cin>>t[i].a;
       cout<<" DIGITE VALOR B ";
       cin>>t[i].b;
       cout<<" DIGITE VALOR C ";
       cin>>t[i].c;
       verificar(t[i].a, t[i].b, t[i].c);
    }

    for(int i = 0; i < 3; i++){
       verificar(t[i].a, t[i].b, t[i].c);
    }

}
