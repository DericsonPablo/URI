#include <iostream>

using namespace std;

int main(){

    int n;

    while(n != 0){
        cin >> n;
        if(n == 0){
            return 0;
        }
        int vetor[n], maria = 0, joao = 0;
        for(int i = 0; i < n; i++){
            cin >> vetor[i];
            if(vetor[i] == 0){
                maria++;
            }else{
                joao++;
            }

        }
        cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;
    }


    return 0;
}
