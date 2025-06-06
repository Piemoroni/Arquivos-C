//Bibloteca
#include <stdio.h>

//Iniciar o programa
int main() {
   
    // Declarar as variaveis, como int para receber apenas numeros inteiros
    int i,soma = 0;
   
    // Usar laço de repetição para mostrar a soma, aumentando os numeros pares de maneira mais facil
    for (int i = 2; i <= 200; i += 2) {
        soma += i;
    }
   
    //Imprimir a soma
    printf("A soma dos 100 primeiros numeros pares (de 1 a 200) é igual a: %d\n", soma);

//Fechar o programa
    return 0;
}
