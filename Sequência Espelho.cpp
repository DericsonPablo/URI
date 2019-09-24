#include <iostream>

using namespace std;

main(){

    int n, aux = 0;
    cin >> n;
    string num;

    while(n > 0){
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b;i++){
            cout << i;

        }for(int i = b; i >= a; i--){
            cout << num[i];
        }

        cout << endl;
        n--;
    }
}
