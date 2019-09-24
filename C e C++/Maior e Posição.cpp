#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int vetor[100];
    int vetorC[100];

    for(int i = 0; i < 100; i++){
        cin >> vetor[i];
        vetorC[i] = vetor[i];
    }

    sort(vetor, vetor+100);
    cout << vetor[99] << endl;

    for(int i = 0; i < 100; i++){
        if(vetor[99] == vetorC[i]){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}
