#include <stdio.h>
#include <stdlib.h>


 main ()
{
    int den, n;
    float h = 0.0;

    printf ("Para a soma H= 1/1 + 1/2 + 1/3 +...+ 1/N, informe N: ");
    scanf ("%d", &n);
    for (den= 1; den <=n; den++) {
            h+=1.0/den;
    printf ("\nTermo de H = %d/%d = %3.2f", 1, den,1.0/den);
    }

    printf ("\n\nH = %3.2f", h);
    getch ();
}
