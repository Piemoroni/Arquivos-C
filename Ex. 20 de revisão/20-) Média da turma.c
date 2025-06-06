//Biblioteca
#include <stdio.h>

//Montar a estrutura
typedef struct {
    char nome[50];
    float media;
} Aluno;

//Inicar o programa
int main (){
    
    //Declarar as veriaveis
    Aluno alunos[5];
    float soma =0.0, media; //pois se trta de nota com casa decimais

    //Usar o lçao de repetição para fazer o cadastro dos alunos de forma mais rapida
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf(" %[^\n]", alunos[i].nome);  // Lê o nome com espaços
        printf("Digite a média final de %s:\n", alunos[i].nome);
        scanf("%f", &alunos[i].media);
        soma += alunos[i].media;
    }

    //Fazer a conta da media
    media = soma / 5;
    printf("\nMédia geral da turmaé de: %.2f\n", media);

    
//Finalizar o programa
return 0;
}