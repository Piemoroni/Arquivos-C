#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int opção; 
    float n1,n2,conta;
    printf ("Opção 1 - Adição\n");
    printf ("Opção 2 - Subtração\n");
    printf ("Opção 3 - Multiplicação\n");
    printf ("Opção 4 - Divisão\n");
    scanf ("%d",&opção);
     switch (opção){
        case 1:
        printf ("Você escolheu adição!\n");
        printf ("Informe os dois números: (em ordem)\n");
        scanf ("%f %f",&n1,&n2);
        conta = n1 + n2;
        printf ("O resultado é:%.2f",conta);
        break;
        
        case 2:
        printf ("Você escolheu subtração!\n");
        printf ("Informe os dois números: (em ordem)\n");
        scanf ("%f %f",&n1,&n2);
        conta = n1 - n2;
        printf ("O resultado é:%.2f",conta);
        break;
        
        case 3:
        printf ("Você escolheu multiplicação!\n");
        printf ("Informe os dois número: (em ordem)\n");
        scanf ("%f %f",&n1,&n2);
        conta = n1 * n2;
        printf ("O resultado é:%.2f",conta);
        break;
        
        case 4:
        printf ("Você escolheu divisão!\n");
        printf ("Informe os dois números: (em ordem)\n");
        scanf ("%f %f",&n1,&n2);
        conta = n1 / n2;
        printf ("O resultado é:%.2f",conta);
        break;
        
        default:
        printf ("Opção Inválida! Programa Encerrado");
        return 1;
    }
return 0;
}


