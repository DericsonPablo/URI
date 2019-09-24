#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    float numero;
    int resp = 0;

    while(n){

        cin >> numero;
        while(numero > 1){
            numero = numero/2;
            resp++;
            if(numero == 1 || numero < 1){
                cout << resp << " dias" << endl;
            }
        }
        n--;
        resp = 0;

    }



    return 0;
}
