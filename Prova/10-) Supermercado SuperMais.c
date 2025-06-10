#include <stdio.h>
#include <stdlib.h>

struct Produto {
    char nome[50];
    int qntd;
    float valor;
};

struct Produto produtos;

void CadastrarProdutos();
void VisualizarProdutos();
void ComprasFeitas();
void FinalizarFuncao();

int main() {
    int opcao;
    
    do{
    printf ("---- Seja bem vindo(a) ao mercado SuperMais! ----\n");
    printf ("Escolha uma das opções:\n");
    printf ("1-) Cadastrar Produtos\n");
    printf ("2-) Vizualizar Produtos\n");
    printf ("3-) Realizar Compra\n");
    printf ("4-) Sair do Programa\n");
    scanf ("%d",&opcao);
    
    switch (opcao){
        case 1:
        CadastrarProdutos();
        FinalizarFuncao();
        break;
        
        case 2:
        VisualizarProdutos();
        FinalizarFuncao();
        break;
        
        case 3:
        ComprasFeitas();
        FinalizarFuncao();
        break;
        
        case 4:
        printf ("Muito obrigado(a)!\n");
        printf ("Saindo...\n");
        break;
        
        default:
        printf ("Opção inválida, tente novamente!\n");
        break;
    }
    
    }while (opcao != 4);
    
    return 0;
}

void CadastrarProdutos (){
    printf ("---- Você escolheu cadastrar produtos! ----\n");
    printf ("Informe os dados a seguir:\n");
    printf ("Nome do produto:\n");
    scanf (" %[^\n]",produtos.nome);
    printf ("Quantidade em estoque:\n");
    scanf ("%d",&produtos.qntd);
    printf ("Valor: \n");
    scanf ("%f",&produtos.valor);
    printf ("Produto cadastrado com sucesso!\n");
}

void VisualizarProdutos(){
    printf ("---- Você escolheu vizualizar produtos! ----\n");
    printf ("Nome: %s \n",produtos.nome);
    printf ("Quantidade em estoque: %d \n",produtos.qntd);
    printf ("Valor: %.2f \n",produtos.valor);
}

void ComprasFeitas (){
    int qntdcomprada;
    float valortotal;
    
    printf ("---- Você escolheu realizar compra! -----\n");
    printf("Digite a quantidade a ser comprada: \n");
    scanf("%d", &qntdcomprada);
    
    if (qntdcomprada <= produtos.qntd) {
        valortotal = qntdcomprada * produtos.valor;
        produtos.qntd -= qntdcomprada;
        printf("Compra realizada com sucesso!\n");
        printf("Quantidade comprada: %d\n", qntdcomprada);
        printf("Valor total: R$ %.2f\n", valortotal);
        printf("Quantidade restante em estoque: %d\n", produtos.qntd);
    } 
    else {
        printf("Quantidade no estoque insuficiente!\n");
    }
}

void FinalizarFuncao(){
    printf ("\nEnter para Continuar....\n");
    getchar ();
    getchar ();
    system ("clear");
}

   