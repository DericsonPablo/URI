#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){

    int i, n, p;

        printf ("\n======PAR OU IMPAR======\n");
        printf ("\nDigite um numero: ");
        scanf ("%d", &i);

        while(i!=0){

            if(i>0){
                n = i;
                p = n % 2;

                if(p==0){
                    printf ("\nO numero e par. \n");
                } else {
                    printf ("\nO numero e impar. \n");

                }
            }if(i<0){
                printf ("\nNumero invalido.\n");


            }return (main());


        }

}
