#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

double mediaAritmetica (double n1, double n2, double n3);

int main () {
    double num1, num2, num3, media;

    printf("\nInforme o primeiro valor: ");
    scanf ("%lf", &num1);

    printf("\nInforme o segundo valor: ");
    scanf ("%lf", &num2);

    printf("\nInforme o terceiro valor: ");
    scanf ("%lf", &num3);

    media = mediaAritmetica (num1, num2, num3);

    printf("\n\n\n(%.2lf + %.2lf + %.2lf) / 3 = %.2lf", num1, num2, num3, media);

    printf ("\n\n\n");
    system("pause");
    return 0;
}

double mediaAritmetica (double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3;
}
