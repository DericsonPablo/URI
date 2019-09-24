#include "iostream"

using namespace std;

int main(){

    int n;
    cin >> n;
    int total = 0;
    int latas, copos;
    while(n){
        cin >> latas >> copos;
        if(latas > copos){
            total += copos;
        }
        n--;
    }

    cout << total << endl;
    return 0;
}
