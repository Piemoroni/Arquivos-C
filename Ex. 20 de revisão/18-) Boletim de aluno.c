//Bibloteca

#include <stdio.h>

//Montar a estrutura
typedef struct {
    char nome[100];
    float notas[3];
} Aluno;

//Iniciar o programa
int main() {
    
    // Declarar as variaveis, como float pois media pode contar casas decimais
    Aluno aluno;
    float soma = 0, media;
    
    //Soliciar o nome do aluno
    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]", aluno.nome);
   
    //Usar laço de repetição para solicitar a 3 notas de maneira mais facil
    for (int i = 0; i < 3; i++) {
        printf("Digite a %d nota:\n", i + 1);
        scanf("%f", &aluno.notas[i]);
        soma += aluno.notas[i]; // Somando as notas
    }
    
    // Calcular média do aluno
    media = soma / 3;
    
    //Imprimir os resultados
    printf("\nAluno: %s\n", aluno.nome);
    printf("Média: %.2f\n", media);

    //Comparar a media com uma estrutura de condição, se for maior ou igual a 7 imprimira aprovado, caso não, imprimira reprovado
    if (media >= 7) {
        printf("Status: Aprovado!\n");
    } else {
        printf("Status: Reprovado.\n");
    }


//Fechar o programa
return 0;
}