#include <iostream>

using namespace std;

int main(){

    int n, alcool=0, gasosa=0, diesel=0;

    while(n!=4){
        cin >> n;
        switch(n){
            case 1:
                alcool++;
                break;
            case 2:
                gasosa++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                break;
            default:
                break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasosa << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
