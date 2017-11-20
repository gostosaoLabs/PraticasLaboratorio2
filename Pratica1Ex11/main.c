#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

void FahrenheitParaCelsius (double f);

int main() {
    double temp;
    printf ("\nInforme a temperatura em graus Fahrenheit: ");
    scanf ("%lf", &temp);
    FahrenheitParaCelsius (temp);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

void FahrenheitParaCelsius (double f) {
    double result;
    result = ((double) 5 / (double) 9) * (f - 32);
    printf ("\nTemperatura em graus Celsius: %.2lf", result);
}
