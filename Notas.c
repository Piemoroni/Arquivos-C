#include <stdio.h>
#include <stdlib.h>

#include "Alunos.h"
#include "Notas.h"

void CadastrarNota(Nota *nota, int *conta){
    printf ("---- Cadastrar Nota! ----\n");
    printf ("Informe a matrícula do aluno:\n");
    scanf ("%d",&nota -> matricula);
    printf ("Informe a nota:\n");
    scanf ("%f",&nota -> nota);
    *conta = *conta + 1;
}


void CalcularMedia (Aluno alunos[], Nota notas[]){
    int matricula, QntNotas = 0;
    float media = 0;
    
    printf ("---- Cadastrar Média! ----\n");
    printf ("Informe uma matricula:\n");
    scanf ("%d",&matricula);
    for (int i = 0; i < 10; i ++){
        if (alunos[i].matricula == matricula){
            printf ("Nome: %s\n",alunos[i].nome);
            break;
        }
    }
    for (int i = 0; i < 50; i++){
        if (notas[i].matricula == matricula){
            media += notas[i].nota;
            QntNotas ++;
        }
    }
    
    printf ("Média: %.2f\n", (media / QntNotas));
}
