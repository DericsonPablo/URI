#include <iostream>

using namespace std;

int main(){

    float n = 0, i = 0;
    float resultado = 0;

    while(n > 0){
        cin >> n;
        resultado +=  n;
        i++;
    }
    resultado /= i;
    cout << resultado << endl;
    return 0;
}
