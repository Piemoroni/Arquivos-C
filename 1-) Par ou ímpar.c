//Biblioteca
#include <stdio.h>

//Iniciar o programa
int main (){
   
    //Declarar as variaveis, como int pois seram inteiras
    int n, conta;
   
    //Perguntar e ler a variavel
    printf ("Informe o número:\n");
    scanf ("%d",&n);
   
    //Conta com % para utilizar somente o resto da divisão
    conta = n % 2;
   
    //Imprimir, com condição, se a sobra for zero imprimira par, se for diferente de zero imprmira impar
    if (conta == 0){ 
        printf ("É par!\n");
    }
    else{ 
        printf ("É impar!\n");
    }

//Fechar o programa
return 0;
}