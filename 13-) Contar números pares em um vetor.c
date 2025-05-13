//Bibloteca
#include <stdio.h>

//Iniciar o programa
int main() {
   
    // Declarar as variaveis, como int para receber apenas numeros inteiros
    int vetor [10],i,pares = 0;
   
    //Perguntar e gurdar a variavel, usar laço de repetição para achar apenas os pares
    for (i = 0; i < 10; i++) {
        printf("Digite o %d:\n", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) { //verificando se é par
            pares++;
        }
    }
   
    //Imprimir a quantidade de numeros pares encontrados
    printf("Quantidade de números pares: %d\n", pares);

//Fechar o programa
return 0;
}