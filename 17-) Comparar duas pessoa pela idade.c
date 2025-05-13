//Bibloteca

#include <stdio.h>

//Montar a estrutura
typedef struct {
    char nome[100];
    int idade;
} Pessoa;

//Iniciar o programa
int main() {
    
    // Declarar as variaveis
    Pessoa pessoa1, pessoa2;
   
    //Perguntar e gurdar a variavel das pessoas
    printf("Digite o nome da primeira pessoa:\n");
    scanf(" %[^\n]", pessoa1.nome);
    printf("Digite a idade da primeira pessoa:\n");
    scanf("%d", &pessoa1.idade);

    printf("\nDigite o nome da segunda pessoa:\n");
    scanf(" %[^\n]", pessoa2.nome);
    printf("Digite a idade da segunda pessoa:\n");
    scanf("%d", &pessoa2.idade);


    //Comparar qual a idade maior usando condição, se a pessoa1 for maior imprimira seu nome e idade, se a pessoa2 for maior imprimira
    //seu nome e idade, se ela tiverem a mesma idade imprimira os nomes e a idade
    if (pessoa1.idade > pessoa2.idade) {
        printf("%s é mais velha que %s (ele(a) tem %d anos).\n", pessoa1.nome, pessoa2.nome, pessoa1.idade);
    } else if (pessoa1.idade < pessoa2.idade) {
        printf("%s é mais velha que %s (ele(a) tem %d anos).\n", pessoa2.nome, pessoa1.nome,pessoa2.idade);
    } else {
        printf("%s e %s têm a mesma idade (eles(as) possuem %d anos).\n", pessoa1.nome, pessoa2.nome,pessoa1.idade);
    }


//Fechar o programa
return 0;
}