#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

#define TAM 255

struct registro_aluno {
  char nome[TAM], dataNascimento[11], curso[TAM];
  double nota;
};

typedef struct registro_aluno aluno;

void lerAluno (aluno *a);
void imprimirAluno (aluno *a);
void menor (aluno *vet);
void lerStr (char str[TAM]);
void imprimirStr (char str[TAM]);

int main() {
    int i;
    aluno *alunos;

    alunos = (aluno *) malloc (sizeof (aluno) * 3);

    for (i = 0; i < 3; i++)
      lerAluno (&alunos[i]);

    menor(alunos);

    free (alunos);

    printf ("\n\n\n");
    system("pause");
    return 0;
}

void lerAluno (aluno *a) {
    char ENTER;

    printf ("\n Informe o nome: ");
    lerStr ((*a).nome);
    printf ("\n Informe a data de nascimento: ");
    lerStr ((*a).dataNascimento);
    printf ("\n Informe o curso: ");
    lerStr ((*a).curso);
    printf ("\n Informe a nota: ");
    scanf ("%lf", &((*a).nota));
    scanf ("%c", &ENTER);

    printf("\n\n\n");
}

void imprimirAluno (aluno *a) {
    printf ("\nNome: %s", (*a).nome);
    printf ("\nNascimento: %s", (*a).dataNascimento);
    printf ("\nCurso: %s", (*a).curso);
    printf ("\nNota: %.2lf", (*a).nota);
}

void menor (aluno *vet) {
    int i;
    aluno *a;

    a = &vet[0];

    for (i = 1; i < 3; i++)
        if (vet[i].nota < (*a).nota)
            a = &vet[i];

    imprimirAluno (a);
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
