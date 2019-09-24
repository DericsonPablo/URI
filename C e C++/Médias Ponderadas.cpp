#include <iostream>
#include <iomanip>

using namespace std;

main(){

    int testes;
    float a, b, c, media;
    cin >> testes;


    for(int i = 0; i < testes; i++){
            cin >> a >> b >> c;
            media = ((a*2) + (b * 3) + (c * 5))/10;
            cout << setiosflags(ios::fixed) << setprecision(1) << media << endl;

    }




}
