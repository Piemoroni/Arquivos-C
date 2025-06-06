//Biblioteca
#include <stdio.h>

//Montar a estrutura
typedef struct {
    char nome[100];
    float notas;
    int matricula;
} Aluno;

//Inicar o programa
int main (){
   
    //Declarar as veriaveis
    Aluno alunos[3];
    char busca[100]; //para armazenar texto
    int encontrado = 0, i; //pois se trata de numero inteiro
    
    //Usar o lçao de repetição para fazer o cadastro dos alunos de forma mais rapida
    for (int i = 0; i < 3; i++) {
        printf("\nDigite o nome do %d aluno:\n", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Informe a nota:\n");
        scanf ("%f",&alunos[i].notas);
        printf ("Informe a matricula:\n");
        scanf ("%d",&alunos[i].matricula);
    }

    //Solicitar o nome do aluno q o usuaria deseja buscar
    //Buscar o aluno desjeado
           int mat;
            printf ("\nInforme a matricula que deseja buscar:\n");
            scanf ("%d",&mat);
            int achou = 0;
            for (i=0; i<3;i++){
                if (alunos[i].matricula == mat){
                    printf ("Aluno(a): %s\n Media: %.2f\n",alunos[i].nome, alunos[i].notas);
                    achou = 1;
                    break;
                }
            }
                if (!achou){
                    printf ("Aluno não encontrado\n");
                }
   
//Finalizar o programa
return 0;
}
