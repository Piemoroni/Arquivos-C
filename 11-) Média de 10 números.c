//Bibloteca
#include <stdio.h>

//Iniciar o programa
int main() {
   
    // Declarar as variaveis, float pois pode haver numero com virgula na nota
    int i;
    float n, soma = 0, media; 
   
    //Perguntar e gurdar a variavel, usar laço de repetição para a contagem da media
    for (i = 1; i <= 10; i++) {
        printf("Digite o %d:\n", i);
        scanf("%f", &n);
        soma = soma + n; // soma todos os números
    }

    // Fazer a conta da media
    media = soma / 10;
   
    //Imprimir a media final
    printf("A média dos 10 números é: %.2f\n", media);

//Fechar o programa
    return 0;
}