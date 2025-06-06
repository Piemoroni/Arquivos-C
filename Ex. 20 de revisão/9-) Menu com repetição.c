//Bibloteca

#include <stdio.h>

//Iniciar o programa

int main() {
   
    // Declarar as variaveis, como int para receber so numeros inteiros
    int n1, n2, conta, opcao;
   
    //Perguntar e gurdar as variaveis
    printf ("Informe os números:\n");
    scanf ("%d" "%d",&n1, &n2);
   
    //Usar a do while para parar, e perguntar a opcao , usando a switch case para as condiçoes conforme a escolha
   
    do {
       
    // Começando o menu
    printf("\nOpçao 1: Somar\n");
    printf("Opçao 2: Subtrair\n");
    printf("Opçao 3: Sair\n");
    scanf ("%d",&opcao);
   
    switch (opcao) {    // Caso escolha a 1, fara adiçao, caso escolha a 2, fara subtração, e caso escolha a 3 saira do programa
        case 1:
        printf ("---Voce escolheu a soma----\n");
        conta = n1 + n2;
        printf ("O resultado é: %d \n",conta);
        break;
        
        case 2:
        printf ("---Você escolheu a subtração---\n");
        conta = n1 - n2;
        printf ("O resultado é: %d\n",conta);
        break; 
        
        case 3:
        printf ("Saindo...\n");
        break;
        
        default:
        printf ("Opção invalida, tente novamente\n");
        break;
    }

} while (opcao != 3); //Finalizara quando selecionar a opcao 3

//Fechar o programa
    return 0;
}