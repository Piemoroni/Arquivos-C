#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int número;
    printf ("Informe um número:\n");
    scanf ("%d",&número);
    if (número %2 == 0)
    {
        printf ("Seu número é par");
    }
    else {
        printf ("Seu número é ímpar");
    }
    return 0;
} 
