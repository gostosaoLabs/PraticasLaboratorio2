#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ();
#include <math.h> //log () -> retorna o logaritmo natural, na base e.

int main () {
    double logaritmando, base, logaritmo;

    do {
        printf ("\nInforme o logaritmando (deve ser maior que zero): ");
        scanf ("%lf", &logaritmando);
    } while (logaritmando <= 0);

    do {
        printf ("\nInforme a base (deve ser maior que zero): ");
        scanf ("%lf", &base);
    } while (base <= 0);

    logaritmo = log (logaritmando) / log (base);

    printf("\nResultado = %.2f \n\n\n", logaritmo);

    system("pause");
    return 0;
}
