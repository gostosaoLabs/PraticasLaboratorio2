#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

#define TAM 255

struct registro_aluno {
  char nome[TAM], dataNascimento[11], curso[TAM];
  double nota;
};

typedef struct registro_aluno aluno;

void lerStr (char str[TAM]);
void imprimirStr (char str[TAM]);

int main() {
    char ENTER;
    aluno a1, a2, a3;

    printf ("\n Informe o nome: ");
    lerStr (a1.nome);
    printf ("\n Informe a data de nascimento: ");
    lerStr (a1.dataNascimento);
    printf ("\n Informe o curso: ");
    lerStr (a1.curso);
    printf ("\n Informe a nota: ");
    scanf ("%lf", &a1.nota);
    scanf ("%c", &ENTER);

    printf ("\n\n Informe o nome: ");
    lerStr (a2.nome);
    printf ("\n Informe a data de nascimento: ");
    lerStr (a2.dataNascimento);
    printf ("\nInforme o curso: ");
    lerStr (a2.curso);
    printf ("\n Informe a nota: ");
    scanf ("%lf", &a2.nota);
    scanf ("%c", &ENTER);

    printf ("\n\n Informe o nome: ");
    lerStr (a3.nome);
    printf ("\n Informe a data de nascimento: ");
    lerStr (a3.dataNascimento);
    printf ("\n Informe o curso: ");
    lerStr (a3.curso);
    printf ("\n Informe a nota: ");
    scanf ("%lf", &a3.nota);

    if (((a1.nota > a2.nota) && (a2.nota > a3.nota)) ||
        ((a1.nota > a3.nota) && (a3.nota > a2.nota))) {
        printf ("\nNome: %s", a1.nome);
        printf ("\nNascimento: %s", a1.dataNascimento);
        printf ("\nCurso: %s", a1.curso);
        printf ("\nNota: %.2lf", a1.nota);
    } else if (((a2.nota > a1.nota) && (a1.nota > a3.nota)) ||
               ((a2.nota > a3.nota) && (a3.nota > a1.nota))) {
        printf ("\nNome: %s", a2.nome);
        printf ("\nNascimento: %s", a2.dataNascimento);
        printf ("\nCurso: %s", a2.curso);
        printf ("\nNota: %.2lf", a2.nota);
    } else if (((a3.nota > a1.nota) && (a1.nota > a2.nota)) ||
               ((a3.nota > a2.nota) && (a2.nota > a1.nota))) {
        printf ("\nNome: %s", a3.nome);
        printf ("\nNascimento: %s", a3.dataNascimento);
        printf ("\nCurso: %s", a3.curso);
        printf ("\nNota: %.2lf", a3.nota);
    }

    printf ("\n\n\n");
    system("pause");
    return 0;
}

void lerStr (char str[TAM]) {
   int i = 0;
   scanf ("%c", &str[0]);
   for (i = 1; (str[i - 1] != '\n') && (i < TAM - 1); i++)
      scanf ("%c", &str[i]);

   str[i - 1] = '\0';
}

void imprimirStr (char str[TAM]) {
   int i;

   for (i = 0; (str[i] != '\0') && (i < TAM); i++)
      printf ("%c", str[i]);
}

