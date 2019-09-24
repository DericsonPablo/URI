#include <iostream>

using namespace std;

int main(){

    float a, b , c;

    cin >> a >> b >> c;

    if((a >= (b+c)) || (b >= (a+c)) || (c >= (a+b))){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if(((a*a) == ((b*b) + (c*c))) || ((b*b) == ((a*a) + (c*c))) || ((c*c) == ((b*b) + (a*a)))){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if((a*a) > ((b*b)+(c*c)) || (b*b) > ((a*a)+(c*c)) || (c*c) > ((b*b)+(a*a))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }else if(((a*a) < ((b*b)+(c*c))) || ((b*b) < ((a*a)+(c*c))) || ((c*c) < ((a*a)+(b*b)))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a==b && b==c && a==c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if(((a == b) && (a != c || b != c)) || ((a == c) && (a != b || c != b)) || ((c == b) && (c != a  || b != a))){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
