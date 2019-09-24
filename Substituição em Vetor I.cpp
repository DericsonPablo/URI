#include <iostream>

using namespace std;

int main(){

    int vetor[10];
    int n = 0;

    for(int i = 0; i < 10; i++){
        cin >> vetor[i];
        if(vetor[i] == 0 || vetor[i] < 0){
            vetor[i] = 1;
        }
    }

    while(n < 10){

        cout << "X[" << n << "] = " <<  vetor[n] << endl;
        n++;
    }
    return 0;
}
