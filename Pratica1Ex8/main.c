#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

int main () {
    int i;
    double vet[5];

    for (i = 0; i < 5; i++) {
      printf("\nInforme um numero: ");
      scanf ("%lf", &vet[i]);
    }

    for (i = 0; i < 5; i++)
      printf("\nvet[%d]: %.2lf; vet[%d] - 10%%: %.2lf", i, vet[i], i, vet[i]*.9);

    printf ("\n\n\n");
    system("pause");
    return 0;
}
