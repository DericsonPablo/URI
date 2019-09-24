#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string palavra, palavra1, palavra2;

    cin >> palavra;
    cin >> palavra1;
    cin >> palavra2;

    if(palavra == "vertebrado"){
        if(palavra == "ave"){
            if(palavra2== "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            if(palavra2 ==  "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else if(palavra == "invertebrado"){
        if(palavra1 =="inseto"){
            if(palavra2== "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else if(palavra1 == "anelideo"){
            if(palavra2 == "onivoro"){
                cout << "minhoca" << endl;
            }else{
                cout << "sanguessuga" << endl;
            }
        }
    }

    return 0;
}
