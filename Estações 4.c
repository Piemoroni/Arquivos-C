#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int n; 
    printf ("Informe um número de 1 a 4:\n");
    scanf ("%d",&n);
     switch (n){
        case 1:
        printf ("Você escolheu Verão!\n");
        break;
        
        case 2:
        printf ("Você escolheu Outono!\n");
        break;
        
        case 3:
        printf ("Você escolheu Inverno!\n");
        break;
        
        case 4:
        printf ("Você escolheu Primavera!\n");
        
        default:
        printf ("Opção Inválida! Programa Encerrado");
        return 1;
    }
return 0;
}


