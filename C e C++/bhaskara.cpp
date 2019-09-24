#include  <stdio.h>
#include  <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

main(){

    double delta, resultado1, resultado2,  a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;
    delta = (b * b) - (4 * a * c);
    if(delta < 0 ||  a ==0)
            cout << "Impossivel calcular" << endl;
    else{
            resultado1 = (-b + sqrt(delta)) / (2 * a);
            resultado2 = (-b - sqrt(delta))/ (2 * a);
            cout << "R1 = " << setiosflags(ios::fixed) << setprecision(5) << resultado1 << endl;
            cout << "R2 = " << setiosflags(ios::fixed) << setprecision(5) << resultado2 << endl;
    }

}
