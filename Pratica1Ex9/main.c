#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

int main () {
    int i, j;
    double mat1[4][4], mat2[4][4], result[4][4];

    printf ("\n\n\nInformando a primeira matriz:");
    for (i = 0; i < 4; i++)
      for (j = 0; j < 4; j++) {
        printf("\nInforme um numero: ");
        scanf ("%lf", &mat1[i][j]);
      }

    printf ("\n\n\nInformando a segunda matriz:");
    for (i = 0; i < 4; i++)
      for (j = 0; j < 4; j++) {
        printf("\nInforme um numero: ");
        scanf ("%lf", &mat2[i][j]);
      }

    printf ("\n\n\nSomando as matrizes:");
    for (i = 0; i < 4; i++)
      for (j = 0; j < 4; j++)
        result[i][j] = mat1[i][j] + mat2[i][j];

    printf ("\n\n\nApresentando a matriz resultante:\n");
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++)
        printf("%.2lf ", result[i][j]);
      printf ("\n");
    }

    printf ("\n\n\n");
    system("pause");
    return 0;
}
