#include <iostream>

using namespace std;

int main(){

    int n, temp, repetidos=0;
    cin >> n;

    int vetor[n], vetorC[n] = {0};

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    int aux;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << vetor[i] << endl;
    }


    temp = vetor[0]; // Primeiro valor não entra na varredura
    for (int i=1;i<n;i++) {
        if( vetor[i] == temp ){
            repetidos++; // Enquanto tiverem valores iguais em sequencia, incrementa este contador
        }
        if( repetidos > 1 ) {
            //printf("O valor %i esta repetido %i vezes\n", temp, repetidos);
            vetorC[i] = repetidos;
            repetidos = 1;
        }
            // E atualiza este valor de comparação
            temp = vetor[i];

    }
// Fim do loop, mas ainda não testamos se o último valor do vetor é repetido ou não, então...
        if( repetidos > 1 ) {
            //printf("O valor %i esta repetido %i vezes\n", temp, repetidos);
            vetorC[n-1] = repetidos;
        }

        for(int i = 0; i < n; i++)
            cout << vetor[i] << " aparece " <<  vetorC[i] << " vez(es)" << endl;

    return 0;
}
