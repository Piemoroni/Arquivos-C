#include <stdio.h>
#include <stdlib.h>

#include "Alunos.h"

void CadastrarAluno(Aluno *aluno, int *conta){
    printf("---- Cadastrar Aluno! ----\n");
    printf("Informe a matricula:\n");
    scanf("%d", &aluno->matricula);
    printf("Informe o nome:\n");
    scanf(" %[^\n]", aluno->nome);
    *conta = *conta + 1;
}