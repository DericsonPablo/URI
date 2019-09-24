#include "iostream"

using namespace std;

int main(){

    int diametro, altura, largura, profundidade;

    cin >> diametro;
    cin >> altura >> largura >> profundidade;

    if(altura < diametro || largura < diametro || profundidade < diametro){
        cout << "N" << endl;
    }else{
        cout << "S" <<endl;
    }


    return 0;
}
