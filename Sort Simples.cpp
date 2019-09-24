#include <iostream>

using namespace std;

int main(){

    int vetor[3], aux, copia[3], i ,j;

    for (i = 0; i < 3; i++){
        cin >> vetor[i];
        copia[i] = vetor [i];
    }

    for (i = 0; i < 3 ; i++){
        for ( j = 0; j < 3; j++){
                if(vetor[i] < vetor[j]){
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
        }
    }



    for(int i = 0; i < 3; i++){
        cout << vetor[i] << endl;
    }

    cout << "\n";

    for (i = 0; i < 3; i++ ){

        cout << copia[i] <<endl;
    }

    return 0;
}
