#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int vet[n];
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
        vetor[i] = vet[i];
    }

    sort(vet, vet+n);

    cout << "Menor valor: " << vet[0] << endl;

    for(int i = 0; i < n; i++){
        if(vetor[i] == vet[0]){
            cout << "Posicao: " << i << endl;
            break;
        }
    }

    return 0;
}
