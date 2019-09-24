#include <iostream>

using namespace std;

int main(){

    int n, m;

    while(n != 0 && m !=0){
        cin >> n >> m;
        if(m > n){
            for(int i = n; i <=m ; i++){
                if(i % 2 == 0){
                    cout << i << " " << ""
                }
            }
        }else{

        }
    }



    return 0;
}
