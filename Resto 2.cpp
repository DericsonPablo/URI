#include <iostream>

using namespace std;

main(){

    int n;
    cin >> n;

    for(int i = 2; i < 10000; i++){
        if(i % n == 2)
            cout << i << endl;
    }

}
