#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int n1, n2, n3;
    printf ("Informe o primeiro número:\n");
    scanf ("%d",&n1);
    printf ("Informe o segundo número:\n");
    scanf ("%d",&n2);
    printf ("Informe  terceiro número:\n");
    scanf ("%d",&n3);
    if ( (n1 > n2) && (n1 > n3) )
    {
        printf ("O número maior é :%d",n1);
    }
    else if ( (n2 > n1) && (n2 > n3))
    {
        printf ("O número maior é: %d",n2);
    }
    else if ( (n3 > n1) && (n3 > n2))
    {
        printf ("O número maior é: %d",n3);
    }
    else if ((n1 == n2) && (n2 == n3))
    {
        printf ("São todos iguais");
    }
    return 0;
}