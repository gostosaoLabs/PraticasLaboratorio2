#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ();

int main () {
    int num1, num2;

    printf ("\nInforme o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("\nInforme o segundo numero: ");
    scanf ("%d", &num2);

    printf("%d + %d = %d \n\n\n", num1, num2, num1 + num2);

    system ("pause");
    return 0;
}
