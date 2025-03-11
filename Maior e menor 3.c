#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int n1,n2;
    printf ("Informe o primeiro número:\n");
    scanf ("%d",&n1);
    printf ("Informe o segundo número:\n");
    scanf ("%d",&n2);
    if (n1 > n2)
    {
        printf ("O número maior é: %d",n1);
    }
    else if (n2 > n1)
    {
        printf ("O número maior é: %d",n2);
    }
    else {
        printf ("Os número são iguais");
    }
    return 0;
} 
