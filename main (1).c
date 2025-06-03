#include <stdio.h>
#include <stdlib.h>

#include "Alunos.h"
#include "Notas.h"

void FinalizaFuncao ();

int main(){
    int opcao, contAluno = 0, contNota = 0;
    Aluno alunos[10];
    Nota notas[50];
    
    do{
    printf("---- Sistema escolar SENAI ----\n");
    printf("Selecione uma opção:\n");
    printf("1- Cadastrar aluno\n");
    printf("2- Cadastrar nota\n");
    printf("3- Cadastrar média\n");
    printf("4- Sair\n");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        CadastrarAluno(&alunos[contAluno], &contAluno);
        break;
        
        case 2:
        CadastrarNota(&notas[contNota], &contNota);
        break;
        
        case 3:
        CalcularMedia (alunos, notas);
        break;
        
        case 4:
        printf("Saindo....");
        break;
        
        default:
        printf("Resposta inválida, tente novamente...\n\n");
        break;
    }
    } while (opcao != 4);

    return 0;
}
