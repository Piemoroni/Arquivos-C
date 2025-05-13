 //Bibloteca
#include <stdio.h>

// Iniciar o programa
int main() {
   
    // Declarar as variaveis, como inr para receber apenas numeros inteiros
    int i,n;

    // Perguntar e ler as variaveis
    printf("Informe o numero: \n ");
    scanf("%d", &n);
   
    // Usar laço de repetição para mostrar a tabuada do numero escolhido, aumenando assim o numero do multiplicador
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n* i); //mostrar o numero e a tabuada
    }

//Fechar o programa
    return 0;
}
