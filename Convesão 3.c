#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int opção; 
    float reais, conversão;
    printf ("Informe o valor em real\n");
    scanf ("%f",&reais);
    printf ("Opção 1 - Dólar\n");
    printf ("Opção 2 - Euro\n");
    printf ("Opção 3 - Libra\n");
    scanf ("%d",&opção);
     switch (opção){
        case 1:
        printf ("Você escolheu Dólar!\n");
        conversão = reais * 0.17;
        printf ("Após a conversão você terá %.2f dólares",conversão);
        break;
        
        case 2:
        printf ("Você escolheu Euro!\n");
        conversão = reais * 0.16;
        printf ("Após a conversão você terá %.2f euros",conversão);
        break;
        
        case 3:
        printf ("Você escolheu Libra!\n");
        conversão = reais * 0.13;
        printf ("Após aconversão você terá %.2f libras",conversão);
        break;
        
        default:
        printf ("Opção Inválida! Programa Encerrado");
        return 1;
    }
return 0;
}


