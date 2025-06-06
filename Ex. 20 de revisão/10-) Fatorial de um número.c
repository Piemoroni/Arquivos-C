//Bibloteca
#include <stdio.h>

//Iniciar o programa
int main() {
   
    // Declarar as variaveis, como int para receber apenas numeros inteiros
    int n, fatorial = 1, i;
   
    //Perguntar e gurdar a variavel
    printf ("Informe um numero:\n");
    scanf ("%d",&n);
   
    //Usar laço de repetição para acahar o fatorial do numero escolhido, para multiplica-lo por seu antecessor
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    // Imprimir o rsultado
    printf("O fatorial de %d é %d\n", n, fatorial);

//Fechar o programa
return 0;
}
