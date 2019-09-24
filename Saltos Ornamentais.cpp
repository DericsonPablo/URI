#include <iostream>
#include <string.h>
#include <iomanip>


using namespace std;

int n;

int cont = 0;

void Ordena(float vetor[]){

        float aux;
        for(int i = 0; i < 7; i++){
            for(int j = i+1; j < 7; j++){
                if(vetor[i] > vetor[j]){
                    aux = vetor[i];
                    vetor[i]= vetor[j];
                    vetor[j] = aux;
                }
            }
    }

    vetor[0] = 0;
    vetor[6] = 0;
}

void Soma(float vetor[], float soma[]){

    float somas = 0;
    for(int  j=0; j < 7; j++){
        somas += vetor[j];
    }

    if(cont < n){
        soma[cont] = somas;
        cont++;
    }

}

main(){

    cin >> n;
    string nomes[n];
    int contN = 0, contS = 0, contG = 0;
    float vetor[7];
    float soma[n];
    float grau[n];

while(contG < n){
    if(contN < n){
        cin >> nomes[contN];
        contN++;
    }
    if(contG < n){
        cin >> grau[contG];
        contG++;
    }

    for(int j = 0; j < 7; j++){
        cin >> vetor[j];
    }
    Ordena(vetor);
    Soma(vetor, soma);
}

    for(int i = 0; i < n; i++){
        soma[i] = soma[i] * grau[i];

    }
    for(int i = 0; i < n; i++){
        cout << nomes[i] << " " << setiosflags(ios:: fixed) << setprecision(2) << soma[i] << endl;
    }

}
