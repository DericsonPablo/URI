#include <iostream>

using namespace std;

int main(){

    int i, j;
    int total;

    cin >> i >> j;

    if( i <= 24){
        total = 24 - i + j;
    }

    cout << "O JOGO DUROU " << total << " HORA(S)" <<  endl;
    return 0;
}
