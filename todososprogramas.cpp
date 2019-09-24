#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    float n;
    float s;

    cin >> n;

    if(n >=  0 && n <= 400){
        s = (15 * n)/100;
        cout << "Novo salario: " << setiosflags(ios::fixed) << setprecision(2) << n+s << endl;
        cout << "Reajuste ganho: " << setiosflags(ios::fixed) << setprecision(2) << s << endl;
        cout << "Em percentual: 15 %" << endl;
    }else if(n>400 && n <= 800){
        s = (12 * n)/100;
        cout << "Novo salario: " << setiosflags(ios::fixed) << setprecision(2) << n+s << endl;
        cout << "Reajuste ganho: " << setiosflags(ios::fixed) << setprecision(2) << s << endl;
        cout << "Em percentual: 12 %" << endl;
    }else if(n > 800 && n <= 1200){
        s = (10 * n)/100;
        cout << "Novo salario: " << setiosflags(ios::fixed) << setprecision(2) << n+s << endl;
        cout << "Reajuste ganho: " << setiosflags(ios::fixed) << setprecision(2) << s << endl;
        cout << "Em percentual: 10 %" << endl;
    }else if(n > 1200 && n <= 2000){
        s = (7 * n)/100;
        cout << "Novo salario: " << setiosflags(ios::fixed) << setprecision(2) << n+s << endl;
        cout << "Reajuste ganho: " << setiosflags(ios::fixed) << setprecision(2) << s << endl;
        cout << "Em percentual: 7 %" << endl;
    }else if(n > 2000){
        s = (4 * n)/100;
        cout << "Novo salario: " << setiosflags(ios::fixed) << setprecision(2) << n+s << endl;
        cout << "Reajuste ganho: " << setiosflags(ios::fixed) << setprecision(2) << s << endl;
        cout << "Em percentual: 4 %" << endl;
    }

}
