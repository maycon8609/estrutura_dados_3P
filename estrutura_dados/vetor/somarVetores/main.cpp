#include <iostream>

using namespace std;
#define tam 4

int main(){

    int va[tam], vb[tam], vc[tam];

    for(int i = 0; i < tam; i++ ){
        cout<<" DIGITE OS VALORES PERTECENTE AO VETOR A ";
        cin>>va[i];
    }
    for(int i = 0; i < tam; i++){
        cout<<" DIGITE OS VALORES PERTECENTE AO VETOR B ";
        cin>>vb[i];
    }
    for(int i = 0; i < tam; i++){
        cout<<" VETOR C IQUAL A SOMA DOS VETORES \"A\" E \"B\" ";
        vc[i] = va[i] + vb[i];
        cout<<vc[i]<<endl;
    }

}
