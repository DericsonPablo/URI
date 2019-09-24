#include <iostream>


using namespace std;

int main(){

    int a, b, teste, soma;
    cin >> teste;
    int i ;
    int vetor[teste];

    for(i = 0; i < teste; i++){
        cin >> a;
        cin >> b;
        soma = 0;
        if( a >  b){
            for(int j = b+1; j < a; j++){
                if(j % 2 != 0){
                    soma  +=j;

                }
            }
        }else{
            for(int m = a+1; m < b; m++){
                if(m % 2 != 0){
                    soma  +=m;

                }
            }
        }
        vetor[i] = soma;
    }

    for(int m = 0; m < teste ; m++)
        cout << vetor[m] << endl;


    return 0;

}
