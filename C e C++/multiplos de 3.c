#include <stdio.h>
#include <stdlib.h>


 main ()
{
    int i, soma = 0;
    printf ("Calcule a soma dos numeros multiplos de 3 de 1 a 300");
        for (i = 0; i <= 300; i+=3){
            printf ("\nsomando %d",i);
            soma += i;
            printf (" soma = %d", soma);
        }
    printf ("A soma dos multiplos de 3 de 1 ate 300 e: %i ", soma );


}
