#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int dia; 
    printf ("Escolha um dia de 1 a 7:\n");
    scanf ("%d",&dia);
     switch (dia){
        case 1:
        printf ("Você escolheu Domingo!\n");
        break;
        
        case 2:
        printf ("Você escolheu Segunda!\n");
        break;
        
        case 3:
        printf ("Você escolheu Terça!\n");
        break;
        
        case 4:
        printf ("Você escolheu Quarta!\n");
        break;
        
        case 5:
        printf ("Você escolheu Quinta!\n");
        break;
        
        case 6:
        printf ("Você escolheu Sexta!\n");
        break;
        
        case 7:
        printf ("Você escolheu Sábado!\n");
        break;
        
        default:
        printf ("Opção Inválida! Programa Encerrado");
        return 1;
    }
return 0;
}


