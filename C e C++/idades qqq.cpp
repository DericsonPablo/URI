#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float  n, i = 0;
    float resultado = 0;

    while(n>0){
        cin >> n;
        if(n > 0){
            resultado +=  n;
            i++;
        }
    }
    resultado = resultado/i;
    cout << setiosflags(ios::fixed) << setprecision(2) << resultado << endl;

    return 0;
}
