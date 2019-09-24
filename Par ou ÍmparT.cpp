#include <iostream>


using namespace std;

main(){

    int n;
    cin >> n;
    int vetor[n];


    for(int i = 0; i < n; i++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0 && vetor[i]!=0)
            cout << "EVEN ";
        if(vetor[i] % 2!=0 && vetor[i] !=0)
            cout << "ODD ";
        if(vetor[i] == 0)
            cout <<  "NULL" << endl;;
        if(vetor[i] > 0)
            cout << "POSITIVE" << endl;
        else if(vetor[i] < 0)
            cout << "NEGATIVE" << endl;
    }




}
