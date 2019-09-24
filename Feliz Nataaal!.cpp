#include <iostream>

using namespace std;

int main(){

    int tam;
    cin >> tam;
    char palavra[tam];

    for(int i = 0; i < tam; i++){
        palavra[i] = 'a';
    }

    cout << "Feliz nat";
    for(int i = 0; i < tam; i++)
        cout << palavra[i];
    cout << "l!" << endl;


}
