#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

int main () {
    int i, limiteInferior, limiteSuperior;

    printf ("\nInforme um numero: ");
    scanf ("%d", &limiteInferior);

    printf ("\nInforme um numero: ");
    scanf ("%d", &limiteSuperior);

    for (i = limiteInferior; i <= limiteSuperior; i++)
        if (i % 2 == 0)
            printf("\nO numero %d e par!!!", i);

    printf ("\n\n\n");
    system ("pause");
    return 0;
}
