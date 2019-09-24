#include <iostream>

using namespace std;

int main(){

    int xic, ovos, colher, respX = 0, respO = 0, respC = 0;
    int total = 0;
    cin >> xic >> ovos >> colher;
    while(respX == 0 && respO == 0 && respC == 0){
        respX = xic % 2;
        respO = ovos % 3;
        respC = colher % 5;
        total++;
    }

    cout << total << endl;
    return 0;
}
