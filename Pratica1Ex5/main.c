#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ();

int main() {
  int op;
  char ENTER;
  double base, altura, raio, maior, menor;

  while (1) {
    printf ("\nInforme: ");
    printf ("\n[1] Para calcular a area de um retangulo.");
    printf ("\n[2] Para calcular a area de um triangulo.");
    printf ("\n[3] Para calcular a area de um circulo.");
    printf ("\n[4] Para calcular a area de um trapezio.\n\n--> ");
    scanf ("%d", &op);

    switch (op) {
      case 1:
        printf ("\nInforme a base do retangulo: ");
        scanf ("%lf", &base);

        printf ("\nInforme a altura do retangulo: ");
        scanf ("%lf", &altura);

        printf ("\nArea: %.2lf \n\n\n", base * altura);
        break;
      case 2:
        printf ("\nInforme a base do triangulo: ");
        scanf ("%lf", &base);

        printf ("\nInforme a altura do triangulo: ");
        scanf ("%lf", &altura);

        printf ("\nArea: %.2lf \n\n\n", base * altura / 2);
        break;
      case 3:
        printf ("\nInforme o raio do circulo: ");
        scanf ("%lf", &raio);

        printf ("\nArea: %.2lf \n\n\n", 3.14 * raio * raio);
        break;
      case 4:
        printf ("\nInforme a base maior do trapezio: ");
        scanf ("%lf", &maior);

        printf ("\nInforme a base menor do trapezio: ");
        scanf ("%lf", &menor);

        printf ("\nInforme a altura do trapezio: ");
        scanf ("%lf", &altura);

        printf ("\nArea: %.2lf \n\n\n", (maior + menor) * altura / 2);
        break;
      default:
        printf("\nCodigo invalido! \n\n\n");
    }

    scanf ("%c", &ENTER);
    printf ("\n\n\nPressione a tecla <ENTER>.");
    scanf ("%c", &ENTER);

    system ("clear || cls");
  }
  return 0;
}
