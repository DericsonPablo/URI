#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int j = 7;
    while(i < 10){

        cout << "I=" << i << " J=" << j << endl;
        j--;
        if(j == 4){
            j = 7;
            i+=2;
        }
    }

    return 0;
}
