#include <iostream>

using namespace std;

int main(){

    int tam, in=0, out=0;
    cin >> tam;
    int vetor[tam];

    for(int i = 0; i < tam; i++){
        cin >> vetor[i];

        if(vetor[i] <= 20 && vetor[i] >= 10){
            in++;
        }else{
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

}
