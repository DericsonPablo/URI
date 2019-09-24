#include "iostream"
#include "stdio.h"

using namespace std;

int main(){

    int n, m;
    while(scanf("%i", &n) != EOF && scanf("%i", &m) != EOF){
        m *= 2;
        cout << n*m << endl;
    }

    return 0;
}
