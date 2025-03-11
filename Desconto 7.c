#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    float val,val10,val5;
    printf ("Informe o valor da compra:\n");
    scanf ("%f",&val);
    if (val >500,00 )
    {
        val10 = (val - (val * 0.10));
        printf ("O valor final será: %.2f reais",val10);
    }
    else if (val>200.00)
    {
        val5 = (val - (val * 0.05));
        printf ("O valor final sera: %.2f reais",val5);
    }
    else{
        printf ("O Valor fina é %.2f reais (não obteve desconto)",val);
    }
    return 0;
} 
