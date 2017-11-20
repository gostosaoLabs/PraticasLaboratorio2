#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ();

int main () {
    double num1, num2;

    printf ("\nInforme o primeiro numero: ");
    scanf ("%lf", &num1);

    printf ("\nInforme o segundo numero: ");
    scanf ("%lf", &num2);

    if (num1 > num2)
      printf ("\nMaior: %.2lf. \n\n\n", num1);
    else
      if (num2 > num1)
        printf ("\nMaior: %.2lf. \n\n\n", num2);
      else
        printf ("\nOs numeros informados sao iguais! \n\n\n");

    system ("pause");
    return 0;
}
