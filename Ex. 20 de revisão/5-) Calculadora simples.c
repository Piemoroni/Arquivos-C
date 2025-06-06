//Bibloteca
#include <stdio.h>

// Iniciar o programa
int main() {
    
    // Declarar as variaveis, int para os numeros inteiros e char para ler os imbolos com texto
    int n1, n2, conta;
    char simbolo;

    // Perguntar e ler as variaveis
    printf("Informe os numeros:\n");
    scanf("%d" "%d",&n1,&n2);

    printf("Informe um simbolo (+, -, *, /):\n ");
    scanf(" %c", &simbolo);

    // Realizar operação conforme o simbolo, com condição, se selecionar + fara adição, 
    //se selecionar - fara subtração, se selecionar * fara multiplicação, 
    //se selecionar * fara multiplicação, se selecionar / fara devisão, se digitar algo inválido, ela avisara
    if (simbolo == '+') { 
        conta = n1 + n2;
        printf("O resultado é: %d\n", conta);
    }
    else if (simbolo == '-') { 
        conta = n1 - n2;
        printf("O resultado é: %d\n", conta);
    }
    else if (simbolo == '*') {
        conta = n1 * n2;
        printf("O resultado é: %d\n", conta);
    }
    else if (simbolo == '/') { 
         conta = n1 / n2;
         printf("O resultado é: %d\n", conta);
    }
    else { // Se digitar algo inválido, ela avisara
        printf("Operador invalido!\n");
    }

//Fechar o programa
    return 0;
}