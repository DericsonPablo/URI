#include <iostream>
#include <iomanip>

using namespace std;

main(){

    float cod, quant;
    float pagar;

    cin >> cod;
    cin >> quant;

    if(cod == 1)
        pagar = quant  * 4.00;
    else if (cod == 2)
        pagar = quant * 4.50;
    else if(cod == 3)
        pagar = quant * 5.00;
    else if(cod == 4)
        pagar = quant * 2.00;
    else if (cod == 5)
        pagar = quant * 1.50;

    cout << "Total: R$ " << setiosflags (ios::fixed) << setprecision(2) << pagar << endl;
}
