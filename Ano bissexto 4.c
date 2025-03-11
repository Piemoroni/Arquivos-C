#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int ano;
    printf ("Informe o ano:\n");
    scanf ("%d",&ano);
    if ((ano %4 == 0) && (ano %100 != 0))
    {
        printf ("O ano é bissexto");
    }
    else {
        printf ("O ano não é bissexto");
    }
    return 0;
} 
