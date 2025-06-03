#ifndef NOTAS_H
#define NOTAS_H

#include "Alunos.h"

typedef struct{
    int matricula;
    float nota;
} Nota;

void CadastrarNota (Nota *nota, int *conta);
void CalcularMedia (Aluno alunos[], Nota notas[]);

#endif