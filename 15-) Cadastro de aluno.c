//Bibloteca
#include <stdio.h>

//Montar a estrutura de cadastro
typedef struct{
    char nome[30]; //char para ler nome como texto
    int idade; //int para ler a iadade como inteiro
    float nota; //float por a nota pode conter casas decimais
} Aluno;

//Iniciar o programa
int main() {
   Aluno aluno; // Declarar as variaveis
    
    //Perguntar e gurdar as variaveis
    printf("Digite o nome do aluno: \n");
    scanf ("%[^\n]",aluno.nome); //para ler com espaçamento

    printf("Digite a idade do aluno:\n");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno:\n");
    scanf("%f", &aluno.nota);
   
    //Imprimir as informações do cadastro obtidas anteriormente
    printf("---- Cadastro do Aluno: ---- \n");
    printf("Nome: %s \n", aluno.nome);  
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

//Fechar o programa
return 0;
}
