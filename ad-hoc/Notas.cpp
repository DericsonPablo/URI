#include <iostream>

using namespace std;

int n;

main(){
    cin >> n;
    int vetor[n];


    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    int aux;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    int maior = 0;
    int pos = 0;
    int maiorvezes = 1;
    int atual;
    int cont;
    atual = vetor[0];
    int valor;
    for(int i = pos; i < n; i++){
        if(atual == vetor[i]){
            maiorvezes++;
        }else{
            if(maiorvezes > 1){
                valor = maior;
                cont = maiorvezes;
            }
            maior = atual;
            atual = vetor[i];
            pos = i;
            maiorvezes = 1;
        }
    }

    if(maiorvezes > cont){
        cout << atual << endl;
    }else{
        cout << valor << endl;
    }

}
/*
bool compare(struct no A, struct no B){

    if(A.dado < B.dado){
        return true;
    }else {
        return false;
    }

}
*/
