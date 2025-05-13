//Bibloteca

#include <stdio.h>

//Montar a estrutura
typedef struct Produto {
    char nome[100];
    float preco;
    int quantidade;
}Produto;

//Iniciar o programa
int main() {
    
    // Declarar as variaveis
    Produto produtos[5];
    float total; //total do valor, preço tem casa decimal
   
    //Perguntar e gurdar a variavel, usando laço de repetição para guardar os 5
   for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do %d produto:\n", i + 1);
        scanf(" %[^\n]", produtos[i].nome); 

        printf("Digite o preço do %d produto:\n", i + 1);
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade do %dº produto:\n", i + 1);
        scanf("%d", &produtos[i].quantidade);
    }

    //Imprimir as informações, obtidas antes, usando laço de repetição para imprimir os 5
    printf("----Total dos valores dos produtos:----\n");
    for (int i = 0; i < 5; i++) {
        total = produtos[i].preco * produtos[i].quantidade;
        printf("\nProduto: %s \n Preço: %.2f \n Quantidade: %d \n Total: %.2f\n",
        produtos[i].nome, produtos[i].preco, produtos[i].quantidade, total);
    }

//Fechar o programa
return 0;
}