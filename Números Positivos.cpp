#include <iostream>

using namespace std;

main(){

    float vetor[6];
    int cont = 0;

    for(int i = 0; i < 6; i++){
        cin >> vetor[i];
        if(vetor[i] > 0)
            cont ++;
    }

    cout << cont << " valores positivos" << endl;

}
