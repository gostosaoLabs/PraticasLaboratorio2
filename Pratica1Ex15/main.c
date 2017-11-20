#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

#define TAM 255

struct registro_aluno {
  char nome[TAM], dataNascimento[11], curso[TAM];
  double nota;
};

typedef struct registro_aluno aluno;

void lerAluno (aluno *a);
void imprimirAluno (aluno a);
void lerStr (char str[TAM]);
void imprimirStr (char str[TAM]);

int main() {
    aluno a1, a2, a3;

    lerAluno (&a1);
    lerAluno (&a2);
    lerAluno (&a3);

    if (((a1.nota > a2.nota) && (a2.nota > a3.nota)) ||
        ((a1.nota > a3.nota) && (a3.nota > a2.nota))) {
        imprimirAluno(a1);
    } else if (((a2.nota > a1.nota) && (a1.nota > a3.nota)) ||
               ((a2.nota > a3.nota) && (a3.nota > a1.nota))) {
        imprimirAluno(a2);
    } else if (((a3.nota > a1.nota) && (a1.nota > a2.nota)) ||
               ((a3.nota > a2.nota) && (a2.nota > a1.nota))) {
        imprimirAluno(a3);
    }

    printf ("\n\n\n");
    system("pause");
    return 0;
}

void lerAluno (aluno *a) {
    char ENTER;

    printf ("\n Informe o nome: ");
    lerStr ((*a).nome);                           //(*a).nome ou a->nome.
    printf ("\n Informe a data de nascimento: ");
    lerStr ((*a).dataNascimento);                 //(*a).dataNascimento ou a->dataNascimento.
    printf ("\n Informe o curso: ");
    lerStr (a->curso);                            //(*a).curso ou a->curso.
    printf ("\n Informe a nota: ");
    scanf ("%lf", &((*a).nota));                  //(*a).nota ou a->nota.
    scanf ("%c", &ENTER);

    printf("\n\n\n");
}

void imprimirAluno (aluno a) {
    printf ("\nNome: %s", a.nome);
    printf ("\nNascimento: %s", a.dataNascimento);
    printf ("\nCurso: %s", a.curso);
    printf ("\nNota: %.2lf", a.nota);
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

