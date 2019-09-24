#include <stdio.h>
#include <stdlib.h>


 main ()
{
    float dist, litro ;

    printf ("\nInforme a distancia percorrida (Km): ");
    scanf (" %f", &dist);
    printf ("\nInforme a quantidade de litros consumidos (L): ");
    scanf (" %f", &litro);
    printf ("\nO consumo medio foi: %f Km/L", dist/litro);
    getch ();
}
