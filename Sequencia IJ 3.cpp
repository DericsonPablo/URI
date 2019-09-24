#include <iostream>

using namespace std;

int main(){

    int i =1;
    int j = 7;
    int aux = j;

    while(i < 10){
        for(int y = 0; y < 3 ; y++){
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        j = j + 5;
        i +=2;
    }


    return 0;
}
