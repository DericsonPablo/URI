#include <iostream>

using namespace std;

main(){

    int x, y;
    cin >> x >> y;
    int soma = 0;

    if(x > y){
        for(int i = y+1; i < x; i++){
            if(i % 2 !=0)
                soma += i;
        }
    }else{
        for(int j = x+1; j < y; j++){
            if(j % 2 != 0)
                soma += j;
        }

    }

    cout << soma << endl;
}
