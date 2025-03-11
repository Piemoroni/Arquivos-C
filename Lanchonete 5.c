#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int opção; 
    printf ("Bem vindo a nossa lanchonete, escolha o seu lanche!\n");
    printf ("Opção 1 - X-Burguer\n");
    printf ("Opção 2 - X-Salada\n");
    printf ("Opção 3 - X-Bacon\n");
    printf ("Opção 4 - Hot Dog\n");
    printf ("Opção 5 - Refrigerante\n");
    scanf ("%d",&opção);
     switch (opção){
        case 1:
        printf ("Você escolheu X-Burguer!\n");
        printf ("O valor é de: 10.00 reais");
        break;
        
        case 2:
        printf ("Você escolheu X-Salada!\n");
        printf ("O valor é de: 12.00 reais");
        break;
        
        case 3:
        printf ("Você escolheu X-Bacon!\n");
        printf ("O valor é de: 15.00 reais");
        break;
        
        case 4:
        printf ("Você escolheu Hot Dog!\n");
        printf ("O valor é de: 08.00 reais");
        break;
        
        case 5:
        printf ("Você escolheu Refrigerante!\n");
        printf ("O valor é de: 05.00 reais");
        break;
        
        default:
        printf ("Opção Inválida! Programa Encerrado");
        return 1;
    }
return 0;
}


