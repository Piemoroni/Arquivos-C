//Bibloteca
#include <stdio.h>

//Iniciar o programa
int main() {
   
    // Declarar as variaveis, como int para receber apenas inteiros
    int i, n, maior, menor;
   
   //Solicitar e armazenar o primeiro número para inicializar maior e menor, e falar um parametro para as variaveis
    printf("Digite o 1: \n");
    scanf("%d", &n);
    maior = n;
    menor = n;

    //Perguntar e gurdar a variavel, usar laço de repetição para achar o menor e o maior numero, de maneira mais facil
    for (i = 1; i <= 10; i++) {
        printf("Digite o %d:\n", i); //solicitando os dados
        scanf("%d", &n);

        if (n > maior) { //Passando os parametros
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }
   
    //Imprimir o resultado final
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

//Fechar o programa
    return 0;
}