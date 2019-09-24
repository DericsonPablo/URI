#include <stdio.h>
#include <stdlib.h>


 main ()
{
    int i, termo = 0, t1 = 1, t2 = 1;
    printf ("Calcule os 20 primeiros termos da serie de fibonacci: ");
    printf ("%d %d", t1, t2);
    for (i = 3; i <= 20; i++) {
        termo = t1 + t2;
        t1 = t2;
        t2 = termo;
        printf ("\n%d", termo);


    }
getch();


}














