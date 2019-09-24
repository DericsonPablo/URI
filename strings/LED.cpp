#include <iostream>
#include <string.h>

using namespace std;


main()
{

    string numero;
    int teste;

    cin >> teste;
    int vetor[teste];


    for(int j = 0; j < teste; j++){
        cin >> numero;
        int led = 0;
        int i = 0;
        while(numero[i] != '\0'){
            switch(numero[i]){
                case '1':{
                    led += 2;
                }break;
                case '2':{
                    led += 5;
                }break;
                case '3':{
                    led += 5;
                }break;
                case '4':{
                    led += 4;
                }break;
                case '5':{
                    led += 5;
                }break;
                case '6':{
                    led += 6;
                }break;
                case '7':{
                    led += 3;
                }break;
                case '8':{
                    led += 7;
                }break;
                case '9':{
                    led += 6;
                }break;
                case '0':{
                    led += 6;
                }break;

            }

            i++;
        }
        vetor[j] = led;
    }

    for(int m = 0; m < teste; m++)
        cout << vetor[m] << " leds" << endl;
    return 0;
}
