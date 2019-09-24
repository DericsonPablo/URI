#include <iostream>
#include <iomanip>

using namespace std;

main(){

    float nota, n1, n2, n3, n4, exame;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;



    n1 *= 2;
    n2 *= 3;
    n3 *= 4;
    n4 *= 1;
    nota = ((n1 + n2 + n3 + n4)/10);

    cout << "Media: " << setiosflags (ios::fixed) << setprecision(1) << nota << endl;
    if (nota >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if (nota >= 5.0 && nota <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        nota = (nota + exame)/2;

        if(nota >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << setiosflags (ios::fixed) << setprecision(1)  << nota << endl;
        }else{
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << setiosflags (ios::fixed) << setprecision(1)  << nota << endl;
        }
    }else if (nota < 5.0){
        cout << "Aluno reprovado." << endl;
    }
}
