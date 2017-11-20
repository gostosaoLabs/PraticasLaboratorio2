#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().
#include <math.h> //pow ().

#define PI 3.14

void volumeEsfera ();

int main () {
    volumeEsfera ();
    printf ("\n\n\n");
    system("pause");
    return 0;
}

void volumeEsfera () {
    double raio, result;
    printf("\nInforme o raio da esfera: ");
    scanf ("%lf", &raio);
    result = (4 * PI * pow (raio, 3)) / 3;
    printf("\nVolume: %.2lf", result);
}
