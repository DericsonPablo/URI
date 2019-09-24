#include <iostream>

using namespace std;

main(){

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << i << "^2 = " << i*i << endl;
        }
    }


}
