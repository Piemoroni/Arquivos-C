#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int número;
    printf ("Informe um número:\n");
    scanf ("%d",&número);
    if (número <0)
    {
        printf ("Seu número é negativo");
    }
    else if (número >0)
    {
        printf ("Seu número é positivo");
    }
    else {
        printf ("Seu número é zero");
    }
    return 0;
} 
