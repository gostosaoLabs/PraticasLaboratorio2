#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

int main() {
    int num, *pt;

    printf("\n Informe um numero: ");
    scanf ("%d", &num);
    pt = &num;

    printf("\n num = %d: ", num);
    printf("\n &num = %p: ", &num);

    printf("\n\n");

    printf("\n pt = %p: ", pt);
    printf("\n &pt = %p: ", &pt);
    printf("\n *pt = %d: ", *pt);

    printf ("\n\n\n");
    system("pause");
    return 0;
}
