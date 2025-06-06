//Bibloteca
#include <stdio.h>

//Iniciar o programa
int main() {
   
    // Declarar as variaveis, como int para receber apenas números inteiros
    int vetor [5],i;
   
    //Perguntar e gurdar a variavel, usar laço de repetição para guarda-los
    for (i = 0; i < 5; i++) {
        printf("Digite o %d: \n", i + 1);
        scanf("%d", &vetor[i]);
    }
   
    //Imprimir o resultado invertido o ultimo laço de repetição usando for novamente
    printf("Vetor invertido: \n");
    for (i = 4; i >= 0; i--) { //invertera o vetor
        printf("%d ", vetor[i]);
    }

//Fechar o programa
    return 0;
}