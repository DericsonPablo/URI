#include <iostream>
#define TAM 5

using namespace std;

int vetor[TAM];

int main(){
int cont = 0;

    for( int i =0; i < TAM ; i++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            cont++;
        }
    }
    cout << cont << " valores pares" << endl;
return 0;
}
